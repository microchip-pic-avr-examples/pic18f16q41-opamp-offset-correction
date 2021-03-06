/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.

    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 

    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
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