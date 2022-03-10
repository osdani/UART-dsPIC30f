
#ifndef UART_H
#define	UART_H

#include <xc.h> // include processor files - each processor file is guarded.  


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
void init_UART1(void);

void init_UART1A(void);

void init_UART2(void);

void UART1_Write(uint8_t data);

void UART2_Write(uint8_t data);

char UART1_Read(void);

char UART2_Read(void);

void UART1_Send_Command(char  * text);

void UART2_Send_Command(char  * text);

void Serial_putUint32(uint32_t number);
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

