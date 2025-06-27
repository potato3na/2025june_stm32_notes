#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	GPIO_SetBits(GPIOB,GPIO_Pin_8 | GPIO_Pin_9);
	
	OLED_ShowChar(1,1,'A');
	OLED_ShowString(1,3,"I am a shit");
	OLED_ShowNum(2,1,12345,5);
	//显示无符号十进制数字
	//如果第四个参数是4->显示“1234”（去掉高位）
	//如果第四个参数是6->显示“012345”（补0）
	OLED_ShowSignedNum (2,7,12345,5);//显示+12345
	OLED_ShowSignedNum (2,7,-66,2);//显示-66
	OLED_ShowHexNum (3,1,0xAA55,4);//显示AA55
	OLED_ShowBinNum (4,1,0xAA55,16);//显示1010101001010101
	
	
	OLED_Clear();
	
	while(1)
	{ 

	}
}
