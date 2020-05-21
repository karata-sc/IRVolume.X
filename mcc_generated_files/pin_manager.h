/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.80.0
        Device            :  PIC16F1769
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

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

// get/set SDO aliases
#define SDO_TRIS                 TRISAbits.TRISA2
#define SDO_LAT                  LATAbits.LATA2
#define SDO_PORT                 PORTAbits.RA2
#define SDO_WPU                  WPUAbits.WPUA2
#define SDO_OD                   ODCONAbits.ODA2
#define SDO_ANS                  ANSELAbits.ANSA2
#define SDO_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SDO_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SDO_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SDO_GetValue()           PORTAbits.RA2
#define SDO_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SDO_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SDO_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SDO_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define SDO_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define SDO_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define SDO_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set En1 aliases
#define En1_TRIS                 TRISAbits.TRISA4
#define En1_LAT                  LATAbits.LATA4
#define En1_PORT                 PORTAbits.RA4
#define En1_WPU                  WPUAbits.WPUA4
#define En1_OD                   ODCONAbits.ODA4
#define En1_ANS                  ANSELAbits.ANSA4
#define En1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define En1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define En1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define En1_GetValue()           PORTAbits.RA4
#define En1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define En1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define En1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define En1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define En1_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define En1_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define En1_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define En1_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set En2 aliases
#define En2_TRIS                 TRISAbits.TRISA5
#define En2_LAT                  LATAbits.LATA5
#define En2_PORT                 PORTAbits.RA5
#define En2_WPU                  WPUAbits.WPUA5
#define En2_OD                   ODCONAbits.ODA5
#define En2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define En2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define En2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define En2_GetValue()           PORTAbits.RA5
#define En2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define En2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define En2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define En2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define En2_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define En2_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODB4
#define IO_RB4_ANS                  ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODB6
#define IO_RB6_ANS                  ANSELBbits.ANSB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODB7
#define IO_RB7_ANS                  ANSELBbits.ANSB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set IRIN aliases
#define IRIN_TRIS                 TRISCbits.TRISC0
#define IRIN_LAT                  LATCbits.LATC0
#define IRIN_PORT                 PORTCbits.RC0
#define IRIN_WPU                  WPUCbits.WPUC0
#define IRIN_OD                   ODCONCbits.ODC0
#define IRIN_ANS                  ANSELCbits.ANSC0
#define IRIN_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IRIN_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IRIN_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IRIN_GetValue()           PORTCbits.RC0
#define IRIN_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IRIN_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IRIN_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IRIN_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IRIN_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define IRIN_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define IRIN_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IRIN_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set CS aliases
#define CS_TRIS                 TRISCbits.TRISC4
#define CS_LAT                  LATCbits.LATC4
#define CS_PORT                 PORTCbits.RC4
#define CS_WPU                  WPUCbits.WPUC4
#define CS_OD                   ODCONCbits.ODC4
#define CS_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define CS_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define CS_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define CS_GetValue()           PORTCbits.RC4
#define CS_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define CS_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define CS_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define CS_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define CS_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set SCK aliases
#define SCK_TRIS                 TRISCbits.TRISC5
#define SCK_LAT                  LATCbits.LATC5
#define SCK_PORT                 PORTCbits.RC5
#define SCK_WPU                  WPUCbits.WPUC5
#define SCK_OD                   ODCONCbits.ODC5
#define SCK_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SCK_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SCK_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SCK_GetValue()           PORTCbits.RC5
#define SCK_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SCK_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SCK_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SCK_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define SCK_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

// get/set RS aliases
#define RS_TRIS                 TRISCbits.TRISC6
#define RS_LAT                  LATCbits.LATC6
#define RS_PORT                 PORTCbits.RC6
#define RS_WPU                  WPUCbits.WPUC6
#define RS_OD                   ODCONCbits.ODC6
#define RS_ANS                  ANSELCbits.ANSC6
#define RS_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RS_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RS_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RS_GetValue()           PORTCbits.RC6
#define RS_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RS_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define RS_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define RS_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define RS_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define RS_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define RS_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set E aliases
#define E_TRIS                 TRISCbits.TRISC7
#define E_LAT                  LATCbits.LATC7
#define E_PORT                 PORTCbits.RC7
#define E_WPU                  WPUCbits.WPUC7
#define E_OD                   ODCONCbits.ODC7
#define E_ANS                  ANSELCbits.ANSC7
#define E_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define E_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define E_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define E_GetValue()           PORTCbits.RC7
#define E_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define E_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define E_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define E_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define E_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define E_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define E_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define E_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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



#endif // PIN_MANAGER_H
/**
 End of File
*/