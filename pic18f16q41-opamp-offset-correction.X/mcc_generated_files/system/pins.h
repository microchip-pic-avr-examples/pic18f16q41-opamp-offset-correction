/**
  Generated Pins header File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.h

  Summary:
    This is generated driver header for pins. 

  Description:
    This header file provides APIs for all pins selected in the GUI.

  Generation Information:
    Driver Version:  3.0.0

*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA2 aliases
#define INDICATOR_LED_TRIS                 TRISAbits.TRISA2
#define INDICATOR_LED_LAT                  LATAbits.LATA2
#define INDICATOR_LED_PORT                 PORTAbits.RA2
#define INDICATOR_LED_WPU                  WPUAbits.WPUA2
#define INDICATOR_LED_OD                   ODCONAbits.ODCA2
#define INDICATOR_LED_ANS                  ANSELAbits.ANSELA2
#define INDICATOR_LED_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define INDICATOR_LED_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define INDICATOR_LED_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define INDICATOR_LED_GetValue()           PORTAbits.RA2
#define INDICATOR_LED_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define INDICATOR_LED_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define INDICATOR_LED_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define INDICATOR_LED_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define INDICATOR_LED_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define INDICATOR_LED_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define INDICATOR_LED_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define INDICATOR_LED_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RB4 aliases
#define ANALOG_IN_TRIS                 TRISBbits.TRISB4
#define ANALOG_IN_LAT                  LATBbits.LATB4
#define ANALOG_IN_PORT                 PORTBbits.RB4
#define ANALOG_IN_WPU                  WPUBbits.WPUB4
#define ANALOG_IN_OD                   ODCONBbits.ODCB4
#define ANALOG_IN_ANS                  ANSELBbits.ANSELB4
#define ANALOG_IN_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define ANALOG_IN_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define ANALOG_IN_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define ANALOG_IN_GetValue()           PORTBbits.RB4
#define ANALOG_IN_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define ANALOG_IN_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define ANALOG_IN_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define ANALOG_IN_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define ANALOG_IN_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define ANALOG_IN_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define ANALOG_IN_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define ANALOG_IN_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB7 aliases
#define UART_TX_TRIS                 TRISBbits.TRISB7
#define UART_TX_LAT                  LATBbits.LATB7
#define UART_TX_PORT                 PORTBbits.RB7
#define UART_TX_WPU                  WPUBbits.WPUB7
#define UART_TX_OD                   ODCONBbits.ODCB7
#define UART_TX_ANS                  ANSELBbits.ANSELB7
#define UART_TX_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define UART_TX_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define UART_TX_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define UART_TX_GetValue()           PORTBbits.RB7
#define UART_TX_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define UART_TX_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define UART_TX_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define UART_TX_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define UART_TX_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define UART_TX_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define UART_TX_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define UART_TX_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set RC1 aliases
#define IO_RC1_TRIS                 TRISCbits.TRISC1
#define IO_RC1_LAT                  LATCbits.LATC1
#define IO_RC1_PORT                 PORTCbits.RC1
#define IO_RC1_WPU                  WPUCbits.WPUC1
#define IO_RC1_OD                   ODCONCbits.ODCC1
#define IO_RC1_ANS                  ANSELCbits.ANSELC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_RC1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_RC1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_RC1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_RC1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 aliases
#define OPAMP_OUT_TRIS                 TRISCbits.TRISC2
#define OPAMP_OUT_LAT                  LATCbits.LATC2
#define OPAMP_OUT_PORT                 PORTCbits.RC2
#define OPAMP_OUT_WPU                  WPUCbits.WPUC2
#define OPAMP_OUT_OD                   ODCONCbits.ODCC2
#define OPAMP_OUT_ANS                  ANSELCbits.ANSELC2
#define OPAMP_OUT_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define OPAMP_OUT_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define OPAMP_OUT_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define OPAMP_OUT_GetValue()           PORTCbits.RC2
#define OPAMP_OUT_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define OPAMP_OUT_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define OPAMP_OUT_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define OPAMP_OUT_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define OPAMP_OUT_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define OPAMP_OUT_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define OPAMP_OUT_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define OPAMP_OUT_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PINS_H
/**
 End of File
*/