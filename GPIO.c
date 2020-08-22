#include <stdint.h>
#include <stdbool.h>

//#define GPIOx_MODER 
//#define GPIOx_OTYPER
//#define GPIOx_OSPEEDR //Output speed
//#define GPIOx_PUPDR //
//#define GPIOx_IDR //input data
//#define GPIOx_ODR //output data
//#define GPIOx_BSRR //Set -  reset
//#define GPIOx_LCKR //locker
//#define GPIOx_AFRH //alternate function selection High
//#define GPIOx_AFRL //alternate function selection Low

#define	RCC_CR		(*(uint32_t*)0x40023800u)
#define	RCC_PLLCFGR   	(*(uint32_t*)0x40023804u) 		//0x04 
#define	RCC_CFGR	(*(uint32_t*)0x40023808u)		//0x08
#define RCC_AHB1ENR 	(*(uint32_t*)0x40023830u)
#define GPIOG_MODER 	(*(uint32_t*)0x40021800u)
#define GPIOG_OTYPER	(*(uint32_t*)0x40021804u)
#define GPIOG_OSPEEDR 	(*(uint32_t*)0x40021808u)		//Output speed
#define GPIOG_PUPDR 	(*(uint32_t*)0x4002180Cu)		//
#define GPIOG_ODR 	(*(uint32_t*)0x40021814u)		//output data



int main(void) 
{
	RCC_CR			= 0x02000083u;
	RCC_PLLCFGR		= 0x24003002u;		//0x04 
	RCC_CFGR		= 0xC060000Au;		//0x08
	RCC_AHB1ENR		= 0x01000040u;
	GPIOG_MODER		= 0x04000000u;		//output
	GPIOG_OTYPER		= 0x00000000u;		//PG13 push pull
	GPIOG_OSPEEDR		= 0x04000000u;		//Output speed
	GPIOG_PUPDR		= 0x04000000u;		//pull up
	uint32_t i; //Create a loop variable
	
    while(1){
	GPIOG_ODR 	= 0x00002000;//output data
	 for(i = 0; i < 3000000; i++){}; //Burn some time
	GPIOG_ODR 	= 0x00000000;//output data
	 for(i = 0; i < 3000000; i++){}; //Burn some time
    };
}
