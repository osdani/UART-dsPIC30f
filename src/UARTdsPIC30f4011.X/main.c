/*
 * File:   main.c
 * Author: ASUSVivoBook
 *
 * Created on 20 de enero de 2022, 05:58 PM
 */


#include "xc.h"
#include "Device_config.h"
#include <libpic30.h>
#include <stdio.h>
#include "UART.h"


char Data;
char buffer_RX[40];
//int cont_aux = 0;
int cont = 0;
void Read_String(void);

void Read_String(void) {
        Data = UART1_Read();
        buffer_RX[cont] = Data;
        cont++;
        if (Data == '\n') {
            UART1_Send_Command("datos:");
            UART1_Send_Command(buffer_RX);
            //UART2_Write('\n');
            cont = 0;
            __delay_ms(10);
            int i = 0;
            while (buffer_RX[i] != '\0') {
                buffer_RX[i] = 0;
                i++;
            }
        }
        
}
int main(void) {
    TRISEbits.TRISE8 = 0;
    TRISCbits.TRISC15 = 0;
    TRISDbits.TRISD1 = 0;
    init_UART1();
    init_UART2();
    __delay_ms(1000);
    UART1_Send_Command("inicio de transmision");
    UART1_Write('\n');
    int cont_aux = 0;
//    int cont = 0;
    while (1) {
        //if available data in buffer

        if (U1STAbits.URXDA == 1) {
             Read_String();
        }
         
    }
    return 0;
}
