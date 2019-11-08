#ifndef _LIB_H_
#define _LIB_H_

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
//#define GPIOI               ((GPIO_TypeDef *) RCC_BASE)

//typedef struct
//{
//  MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
//  OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
//  OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
//  PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
//  IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
//  ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
//  BSRRL;    /*!< GPIO port bit set/reset low register,  Address offset: 0x18      */
//  BSRRH;    /*!< GPIO port bit set/reset high register, Address offset: 0x1A      */
//  LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
//  AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
//} GPIO_TypeDef;


#define	RCC_BASE					(*(uint32_t*)0x40023800u)
#define	RCC_CR						(*(uint32_t*)0x40023800u)
//#define offset 0x04u
#define	RCC_PLLCFGR				(*(uint32_t*)0x40023804u)	//0x04 
#define	RCC_CFGR					(*(uint32_t*)0x40023808u)		//0x08
#define RCC_AHB1ENR				(*(uint32_t*)0x40023830u)		
#define RCC_AHB1RSTR			(*(uint32_t*)0x40023810u)		//0x10
#define RCC_CIR						(*(uint32_t*)0x4002380Cu)

#define GPIOG_MODER				(*(uint32_t*)0x40021800u)
#define GPIOG_OTYPER			(*(uint32_t*)0x40021804u)
#define GPIOG_OSPEEDR			(*(uint32_t*)0x40021808u)		//Output speed
#define GPIOG_PUPDR				(*(uint32_t*)0x4002180Cu)		//
#define GPIOG_ODR					(*(uint32_t*)0x40021814u)		//output data

#define GPIOA_MODER				(*(uint32_t*)0x40020000u)		//0x00
#define GPIOA_OTYPER			(*(uint32_t*)0x40020004u)		//0x04
#define GPIOA_OSPEEDR			(*(uint32_t*)0x40020008u)		//Output speed 0x08
#define GPIOA_PUPDR				(*(uint32_t*)0x4002000Cu)		//0x0C
#define GPIOA_ODR					(*(uint32_t*)0x40020014u)		//output data
#define GPIOA_IDR					(*(uint32_t*)0x40020010u)   //input read-only data




#define SET_BIT(REG, BIt)     ((REG) |= (BIt))
#define CLEAR_BIT(REG, BIt)   ((REG) &= ~(BIt))
#define READ_BIT(REG, BIt)    ((REG) & (BIt))
#define CLEAR_REG(REG)        ((REG) = (0x0))
#define WRITE_REG(REG, VAL)   ((REG) = (VAL))
#define READ_REG(REG)         ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG(*(REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

#endif
