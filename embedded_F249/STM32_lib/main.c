//Author: Dinh Duc Tam
//STM32F429xx F429 DISCOVERY
//EMBEDDED049

#include <stdint.h>
#include "stm32f429disco.h"
//#include <stdbool.h>

int DELAY(a)
	{
		for(int i = 0; i < a; i++){};					//Burn some time
	}
void RCC_PLL_ENABLE()
	{	
		RCC->CR					= 0x02000083u;		//enable PLL clock
		RCC->PLLCFGR		= 0x24003002u; 		//PPL clock config
		RCC->CFGR				= 0xC060000Au;		//Config
		RCC->AHB1ENR		= 0x01000000u;		//reset AHB1 GPIOG + GPIOA 
		RCC->AHB1RSTR		= 0x00000000u;
	}
	
void GPIO_Init()
	{
		RCC->AHB1ENR |= (1 << 6);								//GPIOG enable
		RCC->AHB1ENR |= (1 << 0);								//GPIOA enable
		PORTG->MODER |= (1 << 26);											//PORT13 pin26,27 output
		PORTG->MODER &= ~(1 << 27);										//pin13 = "01" => bit [26;27] = 01 
		PORTG->MODER |= (1 << 28);											//PORT13 pin28,29 output
		PORTG->MODER &= ~(1 << 29);										//pin14 = "01" => bit [28;29] = 01
		PORTA->MODER &= ~(1 << 0);		
		PORTG->OTYPER			= 0x10000000u;		//PG13 push pull
		PORTG->OSPEEDR		= 0x14000000u;	  //Output speed
		PORTG->PUPDR			= 0x28000000u;		//pull down
		PORTA->PUPDR			= 0x64000002u;		//pull up
		
	}

void ToggleLed()
	{
		PORTG->ODR = ~(PORTG->ODR);
	}

int main(void) 
{
	RCC_PLL_ENABLE();
	GPIO_Init();
	
	PORTG->ODR |= (1 << 13);						//bit 1 = output to pin 13 
	PORTG->ODR |= (1 << 14);						//bit 1 = output to pin 14
	DELAY(300000);
	PORTG->ODR &= ~(1 << 14);	

	while(1) 
		{
			if ((PORTA->IDR & 0x00000001) == 1)
				{
					if ((PORTA->IDR & 0x00000001) == 1) while((PORTA->IDR & 0x00000001) == 1);
					ToggleLed();

				};
    };
}
