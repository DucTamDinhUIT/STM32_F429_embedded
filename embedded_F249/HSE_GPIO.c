//Author: Dinh Duc Tam
//STM32F429xx F429 DISCOVERY
//EMBEDDED049

#include <stdint.h>
//#include <stdbool.h>

//#define GPIOx_MODER 
//#define GPIOx_OTYPER
//#define GPIOx_OSPEEDR	//Output speed
//#define GPIOx_PUPDR		//
//#define GPIOx_IDR		//input data
//#define GPIOx_ODR		//output data
//#define GPIOx_BSRR		//Set -  reset
//#define GPIOx_LCKR		//locker
//#define GPIOx_AFRH		//alternate function selection High
//#define GPIOx_AFRL		//alternate function selection Low
//typedef

#define	RCC_CR					(*(uint32_t*)0x40023800u)
#define	RCC_PLLCFGR				(*(uint32_t*)0x40023804u) 	//0x04 
#define	RCC_CFGR					(*(uint32_t*)0x40023808u)		//0x08
#define RCC_AHB1ENR					(*(uint32_t*)0x40023830u)		
#define RCC_AHB1RSTR					(*(uint32_t*)0x40023810u)		//0x10
#define RCC_CIR						(*(uint32_t*)0x40023810u)

#define GPIOG_MODER				(*(uint32_t*)0x40021800u)
#define GPIOG_OTYPER				(*(uint32_t*)0x40021804u)
#define GPIOG_OSPEEDR				(*(uint32_t*)0x40021808u)		//Output speed
#define GPIOG_PUPDR				(*(uint32_t*)0x4002180Cu)		//
#define GPIOG_ODR				(*(uint32_t*)0x40021814u)		//output data

#define GPIOA_MODER				(*(uint32_t*)0x40020000u)		//0x00
#define GPIOA_OTYPER				(*(uint32_t*)0x40020004u)		//0x04
#define GPIOA_OSPEEDR				(*(uint32_t*)0x40020008u)		//Output speed 0x08
#define GPIOA_PUPDR				(*(uint32_t*)0x4002000Cu)		//0x0C
#define GPIOA_ODR				(*(uint32_t*)0x40020014u)		//output data
#define GPIOA_IDR				(*(uint32_t*)0x40020010u)   //input read-only data

//HSE clock 


void RCC_PLL_ENABLE()
	{	
		RCC_CR				= 0x02000083u;		//enable PLL clock
		RCC_PLLCFGR			= 0x24003002u; 		//PPL clock config
		RCC_CFGR				= 0xC060000Au;		//Config
		RCC_AHB1ENR			= 0x01000041u;		//Enable AHB1 GPIOG + GPIOA
		RCC_AHB1RSTR			= 0x00000000u;
	}
	
void RCC_HSE_ENABLE()
	{	
		RCC_CR				= 0x00010083u;		//enable PLL clock
	//RCC_PLLCFGR				= 0x24003002u; 		//PPL clock config
		RCC_CFGR				= 0xC01000F1u;		//Config
		RCC_AHB1ENR			= 0x01000041u;		//Enable AHB1 GPIOG + GPIOA
		RCC_AHB1RSTR			= 0x00000000u;
		RCC_CIR				= 0x00000000u;		//RCC clock interrupt register
	}

void GPIOG()
	{	
		GPIOG_MODER			= 0x14000000u; 		//output
		GPIOG_OTYPER			= 0x10000000u;		//PG13 push pull
		GPIOG_OSPEEDR			= 0x14000000u;	  //Output speed
		GPIOG_PUPDR			= 0x14000000u;		//pull up
	}
void GPIOA()
	{
		GPIOA_MODER			= 0xA8000000u; 		//PA0 input
//	GPIOA_OTYPER				= 0x00000000u;		//reset
//	GPIOG_OSPEEDR				= 0x0C000000u;	  //Output speed
		GPIOG_PUPDR			= 0x64000002u;		//pull down
	}
void LED_on()
	{
		GPIOG_ODR 				= 0x00006000;					//ON 13+14 output data 
	}
void LED_off()
	{
		GPIOG_ODR 				= 0x00000000;					//ON 13 output data 
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
	
	while(1)
		{
			GPIOG_ODR 		= 0x00002000;					//ON 13 output data 
			for (int i =0; i <20000; i++);
			GPIOG_ODR 		= 0x00000000;					//OFF 14output data
			for (int i =0; i <200; i++);
		}
}
