//Author: Dinh Duc Tam
//STM32F429xx F429 DISCOVERY
//EMBEDDED049

#include <stdint.h>
#include "stm32f429disco.h"
//#include <stdbool.h>

void RCC_PLL_ENABLE()
	{	
		RCC_CR					= 0x02000083u;		//enable PLL clock
		RCC_PLLCFGR			= 0x24003002u; 		//PPL clock config
		RCC_CFGR				= 0xC060000Au;		//Config
		RCC_AHB1ENR			= 0x01000041u;		//Enable AHB1 GPIOG + GPIOA
		RCC_AHB1RSTR		= 0x00000000u;
	}
	
void RCC_HSE_ENABLE()
	{	
		RCC_CR					= 0x00010083u;		//enable PLL clock
	//RCC_PLLCFGR			= 0x24003002u; 		//PPL clock config
		RCC_CFGR				= 0xC01000F1u;		//Config
		RCC_AHB1ENR			= 0x01000041u;		//Enable AHB1 GPIOG + GPIOA
		RCC_AHB1RSTR		= 0x00000000u;
		RCC_CIR					= 0x00000000u;		//RCC clock interrupt register
	}

void GPIOG()
	{	
		GPIOG_MODER			= 0x14000000u; 		//output
		GPIOG_OTYPER		= 0x10000000u;		//PG13 push pull
		GPIOG_OSPEEDR		= 0x14000000u;	  //Output speed
		GPIOG_PUPDR			= 0x28000000u;		//pull down
	}
void GPIOA()
	{
		GPIOA_MODER			= 0xA8000000u; 		//PA0 input
//	GPIOA_OTYPER		= 0x00000000u;		//reset
//	GPIOG_OSPEEDR		= 0x0C000000u;	  //Output speed
		GPIOG_PUPDR			= 0x64000001u;		//pull up
	}
void LED_on()
	{
		GPIOG_ODR 		= 0x00006000;					//ON 13+14 output data 
	}
void LED_off()
	{
		GPIOG_ODR 		= 0x00000000;					//ON 13 output data 
	}

void ToggleLed()
	{
		GPIOG_ODR = ~(GPIOG_ODR);
	}

int main(void) 
{
	RCC_PLL_ENABLE();
	GPIOG();
	GPIOA();	
	
	uint32_t i; //Create a loop variable
	
	for (int c = 0;c <= 3; c++)
		{
			GPIOG_ODR 		= 0x00002000;					//ON 13 output data 
			for(i = 0; i < 300000; i++){};					//Burn some time
			GPIOG_ODR 		= 0x00000000;					//OFF 13 output data
			for(i = 0; i < 300000; i++){};					//Burn some time
			GPIOG_ODR 		= 0x00004000;					//ON 14 output data 
			for(i = 0; i < 600000; i++){}; 					//Burn some time
			GPIOG_ODR 		= 0x00000000;					//OFF 14output data
			for(i = 0; i < 600000; i++){};					//Burn some time
    };
			
	uint32_t a;
    while(1) {
			if ((GPIOA_IDR & 0x00000001) == 1)
				{
					if ((GPIOA_IDR & 0x00000001) == 1) while((GPIOA_IDR & 0x00000001) == 1);
					ToggleLed();
				};
    };
}
