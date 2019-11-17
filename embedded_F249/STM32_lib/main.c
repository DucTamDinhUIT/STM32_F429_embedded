//Author: Dinh Duc Tam
//STM32F429xx F429 DISCOVERY
//EMBEDDED049

#include <stdint.h>
#include "stm32f429disco.h"
//#include <stdbool.h>

int a =0;

void ToggleLed()
	{
		if (a == 0)
			{
				PORTG->ODR |= (1 << 14);
				PORTG->ODR &= ~(1 << 13);
			}
		else
			{	
				PORTG->ODR |= (1 << 13);
				PORTG->ODR &= ~(1 << 14);
			}
			
	};

int main(void) 
{
	RCC_PLL_ENABLE();
	GPIO_Init();
	PORTG->ODR |= (1 << 13);						//bit 1 = output to pin 13 
	PORTG->ODR |= (1 << 14);						//bit 1 = output to pin 14

	while(1) 
		{
			if ((PORTA->IDR & 0x00000001) == 1)
				{
					if ((PORTA->IDR & 0x00000001) == 1) while((PORTA->IDR & 0x00000001) == 1);
					ToggleLed();
					a = ~a;
				};
    };
}
