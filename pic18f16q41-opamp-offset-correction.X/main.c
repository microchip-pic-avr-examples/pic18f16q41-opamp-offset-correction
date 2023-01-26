/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"

#include "utility.h"
#include "calibration.h"
#include "constants.h"

//Detect if a Timer has Overflowed
#define Timer2_HasOverflowOccured() PIR3bits.TMR2IF
#define Timer2_ClearOverflow() PIR3bits.TMR2IF = 0b0

#define Timer4_HasOverflowOccured() PIR10bits.TMR4IF
#define Timer4_ClearOverflow() PIR10bits.TMR4IF = 0b0

int main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    INTERRUPT_GlobalInterruptHighEnable();
    INTERRUPT_GlobalInterruptLowEnable();
    
#ifdef STD_OUTPUT
    printRegisterLine("PoR Offset: 0x", OPA1OFFSET);
#endif
        
    Timer2_Start();
    Timer4_Start();
    
    while (1)
    {
        //Calibration timer flag
        if (Timer2_HasOverflowOccured())
        {                 
            Timer2_ClearOverflow();
            Timer2_Stop();
                        
            //Run the calibration routine
            runCalibration();
            
            Timer2_Start();
        }
        
        //10ms "error" routine
        if (Timer4_HasOverflowOccured())
        {
            Timer4_ClearOverflow();
            OPA1OFFSET--;
        }
    }
    return 0;
}
/**
 End of File
*/