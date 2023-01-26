/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_OD                   ODCONAbits.ODCA0
#define IO_RA0_ANS                  ANSELAbits.ANSELA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)
   
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
#define RB4_IN0_TRIS                 TRISBbits.TRISB4
#define RB4_IN0_LAT                  LATBbits.LATB4
#define RB4_IN0_PORT                 PORTBbits.RB4
#define RB4_IN0_WPU                  WPUBbits.WPUB4
#define RB4_IN0_OD                   ODCONBbits.ODCB4
#define RB4_IN0_ANS                  ANSELBbits.ANSELB4
#define RB4_IN0_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_IN0_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_IN0_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_IN0_GetValue()           PORTBbits.RB4
#define RB4_IN0_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_IN0_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_IN0_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_IN0_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_IN0_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define RB4_IN0_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define RB4_IN0_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_IN0_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)
   
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
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/