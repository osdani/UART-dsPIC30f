#ifndef Device_config_H
#define	Device_config_H
// _XTAL_FREQ  = INTERNAL OF 7.5MHz PLL_16 = 120MHz
// FCY=  _XTAL_FREQ /4
#define FOSC 7500000    //7.5MHz Define la frecuencia de oscilacion del cristal.
#define PLL 16           //SI hay PLL, 7.5MHZ X 16=120MHz
#define FCY FOSC*PLL/4  // Frecuencia de cada instruccion (4 seciones de reloj) 30MHz

#endif	/* DEVICE_CONFIG_H */
/**
 End of File
*/