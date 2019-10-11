#include "stm32f4xx.h"
#include "stm32f4xx_hal_gpio.h"
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

#define GPIOx_MODER 
#define GPIOx_OTYPER
#define GPIOx_OSPEEDR //Output speed
#define GPIOx_PUPDR //
#define GPIOx_IDR //input data
#define GPIOx_ODR //output data
#define GPIOx_BSRR //Set -  reset
#define GPIOx_LCKR //locker
#define GPIOx_AFRH //alternate function selection High
#define GPIOx_AFRL //alternate function selection Low

int main(void) {
	GPIOx_MODER 
	GPIOx_OTYPER
	GPIOx_OSPEEDR //Output speed
	GPIOx_PUPDR //
	GPIOx_ODR //output data
    while(1) {
			HAL_GPIO_Init(GPIOG, GPIO_ODR_ODR_13);
			
    }
}