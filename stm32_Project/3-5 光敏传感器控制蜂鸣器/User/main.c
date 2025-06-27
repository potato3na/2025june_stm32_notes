#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "BUZZER.h"
#include "LightSensor.h"

uint8_t KeyNum;

int main(void)
{
	BUZZER_Init();
	LightSensor_Init();
	

	while(1)
	{ 
		if(LightSensor_Get()==1)
		{
			BUZZER_ON ();
		}
		else
		{
			BUZZER_OFF();
		}
		
	}
}
