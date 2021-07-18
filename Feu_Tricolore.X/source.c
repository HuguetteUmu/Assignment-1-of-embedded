/*
 * File:   source.c
 * Author: NC
 *
 * Created on July 15, 2021, 10:52 PM
 */


#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.
#include <xc.h>

//#include "delays.h"
//#include <xc8.h>
//#include <delays.h>

#define _XTAL_FREQ 8000000

void main(void) {
    TRISB =0b00000000;//all pins for port B are outputs 
            
    while(1)
    {
        PORTBbits.RB0 =1;
        __delay_ms(1500);
        PORTBbits.RB0 =0;
        __delay_ms(1500);
        
        PORTBbits.RB1 =1;
        __delay_ms(1000);
        PORTBbits.RB1 =0;
        __delay_ms(1000);
        
        PORTBbits.RB2 =1;
        __delay_ms(500);
        PORTBbits.RB2 =0;
        __delay_ms(500);
        
    }
    return;
}
