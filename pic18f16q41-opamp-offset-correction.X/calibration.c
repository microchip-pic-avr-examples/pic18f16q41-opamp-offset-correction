#include <xc.h>
#include <stdint.h>

#include "calibration.h"
#include "utility.h"
#include "constants.h"
#include "opamp.h"

#include "mcc_generated_files/system/system.h"

void debugOutput(uint16_t NIvalue, uint16_t valAQ)
{
    printRegisterLine("Offset value: 0x", OPA1OFFSET);
    printRegisterLineLarge("OPA In+ Value: 0x", NIvalue);
    printRegisterLineLarge("OPA OUT Value: 0x", valAQ);
    END_OF_LINE;    //Prints "\n\r"
}

//Internal function - configures the OPA module for calibration
void startCalibration(void)
{   
    INDICATOR_LED_LAT = 1;
    
    //Set unity gain
    OPAMP_EnableUnityGain();
    
    //Remove the feedback resistors from loop
    OPAMP_SetNegativeChannel(NO_CONNECTION);
    
#ifdef STD_OUTPUT
    printRegisterLine("Former Offset: 0x", OPA1OFFSET);
#endif
    
#ifdef DEBUG_OUTPUT
    sendString("Beginning Calibration", 1);
#endif
}

//Internal function - resets the OPA module back to the normal state
void stopCalibration(void)
{
    //Turn off the calibration LED
    INDICATOR_LED_LAT = 0;

    //Release from Unity Gain
    OPAMP_DisableUnityGain();
    
    //Add the feedback resistors back in
    OPAMP_SetNegativeChannel(GSEL);
}

//Internal function - finds the step response needed
int8_t lookupIncrement(int16_t error, uint8_t* history)
{
    int8_t increment;
    if (error < 0)  //Negative Error
    { 
        error *= -1;
        if (error > 10)
            increment = -10;
        else if (error > 5)
            increment = -2;
        else
            increment = -1;
        *history = (*history << 1);
    }
    else            //Positive Error
    {
        if (error > 10)
            increment = 10;
        else if (error > 5)
            increment = 2;
        else
            increment = 1;
        *history = (*history << 1) | 0b1;
    }
    
    //If within tolerance, then the increment is 0
    //This will exit calibration
    if (error <= ACCURACY)
        increment = 0;
    
    return increment;
}

//Runs the calibration routine and prints the results
void runCalibration(void)
{
    uint16_t convCounter = 0, valAQ, NIvalue;
    uint8_t good = 0, errorCode = NO_ERROR, history = 0;
    
    int16_t error;
    int8_t increment;

    startCalibration();
    
    while ((errorCode == 0) && (good == 0))
    {
        //Give time for the OFFSET to settle
        __delay_us(10);
        
        //Capture the Non-Inverting Input 
        captureADC(channel_OPA1);
        NIvalue = ADCC_GetFilterValue();
                
        //Capture the Output
        captureADC(0x8D);
        valAQ = ADCC_GetFilterValue();
        
#ifdef DEBUG_OUTPUT
        debugOutput(NIvalue, valAQ);
#endif
        
        //Error from Offset
        error = valAQ - NIvalue;
        increment = lookupIncrement(error, &history); 
        
        if (increment == 0)
        {
             good = 1;
             continue;
        }
        else
        {
            if ((OPA1OFFSET == 0xFF) && (increment > 0))    //Out of pos range
                errorCode = POS_OFFSET_ERROR;
            else if ((OPA1OFFSET == 0) && (increment < 0))  //Out of neg range
                errorCode = NEG_OFFSET_ERROR;
            else    //Offset range is remaining
                
                if (OPA1OFFSET + increment > 0xFF)  //If bigger than 8bit...
                    OPAMP_SetInputOffset(0xFF);
                else if (OPA1OFFSET + increment < 0) //If under 0...
                    OPAMP_SetInputOffset(0x00);
                else                                //Normal case
                    OPAMP_SetInputOffset(OPA1OFFSET + increment); 
            convCounter++;
        }

        //Counter prevents infinite loops
        if (convCounter == 255)
            errorCode = INFINITE_ERROR;
        
        //Oscillating between two values just out of accuracy
        if (history == 0b10101010)
            errorCode = OSCILLATING_ERROR;
    }
    
    //Finish calibration
    stopCalibration();
    
#ifdef STD_OUTPUT
    if (errorCode != 0)
    {
        printRegisterLine("Conversion error: code ", errorCode);
    }
    printRegisterLine("New Offset: 0x", OPA1OFFSET);
    END_OF_LINE;
#endif
}

void captureADC(adcc_channel_t ch)
{
    //Finish any UART Sends before sleep
    while (!UART1_IsTxDone());
    
    ADCC_StartConversion(ch);
    Sleep();
}