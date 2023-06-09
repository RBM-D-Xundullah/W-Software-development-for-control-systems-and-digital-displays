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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F15344
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
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

// get/set O_MOTOR aliases
#define O_MOTOR_TRIS                 TRISAbits.TRISA2
#define O_MOTOR_LAT                  LATAbits.LATA2
#define O_MOTOR_PORT                 PORTAbits.RA2
#define O_MOTOR_WPU                  WPUAbits.WPUA2
#define O_MOTOR_OD                   ODCONAbits.ODCA2
#define O_MOTOR_ANS                  ANSELAbits.ANSA2
#define O_MOTOR_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define O_MOTOR_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define O_MOTOR_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define O_MOTOR_GetValue()           PORTAbits.RA2
#define O_MOTOR_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define O_MOTOR_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define O_MOTOR_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define O_MOTOR_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define O_MOTOR_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define O_MOTOR_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define O_MOTOR_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define O_MOTOR_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set A_FS aliases
#define A_FS_TRIS                 TRISAbits.TRISA5
#define A_FS_LAT                  LATAbits.LATA5
#define A_FS_PORT                 PORTAbits.RA5
#define A_FS_WPU                  WPUAbits.WPUA5
#define A_FS_OD                   ODCONAbits.ODCA5
#define A_FS_ANS                  ANSELAbits.ANSA5
#define A_FS_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define A_FS_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define A_FS_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define A_FS_GetValue()           PORTAbits.RA5
#define A_FS_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define A_FS_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define A_FS_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define A_FS_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define A_FS_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define A_FS_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define A_FS_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define A_FS_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set A_KNOB aliases
#define A_KNOB_TRIS                 TRISBbits.TRISB6
#define A_KNOB_LAT                  LATBbits.LATB6
#define A_KNOB_PORT                 PORTBbits.RB6
#define A_KNOB_WPU                  WPUBbits.WPUB6
#define A_KNOB_OD                   ODCONBbits.ODCB6
#define A_KNOB_ANS                  ANSELBbits.ANSB6
#define A_KNOB_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define A_KNOB_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define A_KNOB_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define A_KNOB_GetValue()           PORTBbits.RB6
#define A_KNOB_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define A_KNOB_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define A_KNOB_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define A_KNOB_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define A_KNOB_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define A_KNOB_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define A_KNOB_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define A_KNOB_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set O_IND aliases
#define O_IND_TRIS                 TRISBbits.TRISB7
#define O_IND_LAT                  LATBbits.LATB7
#define O_IND_PORT                 PORTBbits.RB7
#define O_IND_WPU                  WPUBbits.WPUB7
#define O_IND_OD                   ODCONBbits.ODCB7
#define O_IND_ANS                  ANSELBbits.ANSB7
#define O_IND_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define O_IND_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define O_IND_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define O_IND_GetValue()           PORTBbits.RB7
#define O_IND_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define O_IND_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define O_IND_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define O_IND_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define O_IND_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define O_IND_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define O_IND_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define O_IND_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

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