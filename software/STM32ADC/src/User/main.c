#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Serial.h"
#include "stdio.h"
#include "string.h"
#include "AD.h"

float c_bat, v_bat, c_usb, v_usb, pwr;

int main(void)
{
	Serial_Init();
	AD_Init();
	while (1)
	{	
		// Serial_Printf("111\n");
		Serial_Printf("D: %d, %d, %d, %d\n", AD_Value[0], AD_Value[1], AD_Value[2], AD_Value[3]);
        Delay_ms(10);
	}
     
    return 0;
}
