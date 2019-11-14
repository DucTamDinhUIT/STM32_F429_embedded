#ifndef _LIB_H_
#define _LIB_H_
#include <stdint.h>

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

typedef unsigned int uint32_t;
typedef struct
{
  uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
  uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
  uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
  uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
  uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
  uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
  uint32_t BSRRL;    /*!< GPIO port bit set/reset low register,  Address offset: 0x18      */
  uint32_t BSRRH;    /*!< GPIO port bit set/reset high register, Address offset: 0x1A      */
  uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
  uint32_t AFRL;   	 /*!< GPIO alternate function registers,     Address offset: 0x20			 */
	uint32_t AFRH;     /*!< GPIO alternate function registers,     Address offset: 0x24			 */
} GPIO_TypeDef;


typedef struct
{
  uint32_t CR;            /*!< RCC clock control register,                                  Address offset: 0x00 */
  uint32_t PLLCFGR;       /*!< RCC PLL configuration register,                              Address offset: 0x04 */
  uint32_t CFGR;          /*!< RCC clock configuration register,                            Address offset: 0x08 */
  uint32_t CIR;           /*!< RCC clock interrupt register,                                Address offset: 0x0C */
  uint32_t AHB1RSTR;      /*!< RCC AHB1 peripheral reset register,                          Address offset: 0x10 */
  uint32_t AHB2RSTR;      /*!< RCC AHB2 peripheral reset register,                          Address offset: 0x14 */
  uint32_t AHB3RSTR;      /*!< RCC AHB3 peripheral reset register,                          Address offset: 0x18 */
  uint32_t      RESERVED0;     /*!< Reserved, 0x1C                                                                    */
  uint32_t APB1RSTR;      /*!< RCC APB1 peripheral reset register,                          Address offset: 0x20 */
  uint32_t APB2RSTR;      /*!< RCC APB2 peripheral reset register,                          Address offset: 0x24 */
  uint32_t      RESERVED1[2];  /*!< Reserved, 0x28-0x2C                                                               */
  uint32_t AHB1ENR;       /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */
  uint32_t AHB2ENR;       /*!< RCC AHB2 peripheral clock register,                          Address offset: 0x34 */
  uint32_t AHB3ENR;       /*!< RCC AHB3 peripheral clock register,                          Address offset: 0x38 */
  uint32_t      RESERVED2;     /*!< Reserved, 0x3C                                                                    */
  uint32_t APB1ENR;       /*!< RCC APB1 peripheral clock enable register,                   Address offset: 0x40 */
  uint32_t APB2ENR;       /*!< RCC APB2 peripheral clock enable register,                   Address offset: 0x44 */
  uint32_t      RESERVED3[2];  /*!< Reserved, 0x48-0x4C                                                               */
  uint32_t AHB1LPENR;     /*!< RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50 */
  uint32_t AHB2LPENR;     /*!< RCC AHB2 peripheral clock enable in low power mode register, Address offset: 0x54 */
  uint32_t AHB3LPENR;     /*!< RCC AHB3 peripheral clock enable in low power mode register, Address offset: 0x58 */
  uint32_t      RESERVED4;     /*!< Reserved, 0x5C                                                                    */
  uint32_t APB1LPENR;     /*!< RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60 */
  uint32_t APB2LPENR;     /*!< RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64 */
  uint32_t      RESERVED5[2];  /*!< Reserved, 0x68-0x6C                                                               */
  uint32_t BDCR;          /*!< RCC Backup domain control register,                          Address offset: 0x70 */
  uint32_t CSR;           /*!< RCC clock control & status register,                         Address offset: 0x74 */
  uint32_t      RESERVED6[2];  /*!< Reserved, 0x78-0x7C                                                               */
  uint32_t SSCGR;         /*!< RCC spread spectrum clock generation register,               Address offset: 0x80 */
  uint32_t PLLI2SCFGR;    /*!< RCC PLLI2S configuration register,                           Address offset: 0x84 */
  uint32_t PLLSAICFGR;    /*!< RCC PLLSAI configuration register,                           Address offset: 0x88 */
  uint32_t DCKCFGR;       /*!< RCC Dedicated Clocks configuration register,                 Address offset: 0x8C */
} RCC_TypeDef;


//#define	RCC_CR						(*((volatile uint32_t*)0x40023800u))
//#define	RCC_PLLCFGR				(*((volatile uint32_t*)0x40023804u))		//0x04 
//#define	RCC_CFGR					(*((volatile uint32_t*)0x40023808u))		//0x08
//#define RCC_AHB1ENR				(*((volatile uint32_t*)0x40023830u))		
//#define RCC_AHB1RSTR			(*((volatile uint32_t*)0x40023810u))		//0x10
//#define RCC_CIR						(*((volatile uint32_t*)0x4002380Cu))

//#define GPIOG_MODER				(*((volatile uint32_t*)0x40021800u))
//#define GPIOG_OTYPER			(*((volatile uint32_t*)0x40021804u))
//#define GPIOG_OSPEEDR			(*((volatile uint32_t*)0x40021808u))		//Output speed
//#define GPIOG_PUPDR				(*((volatile uint32_t*)0x4002180Cu))		//
//#define GPIOG_ODR					(*((volatile uint32_t*)0x40021814u))		//output data

//#define GPIOA_MODER				(*((volatile uint32_t*)0x40020000u))		//0x00
//#define GPIOA_OTYPER			(*((volatile uint32_t*)0x40020004u))		//0x04
//#define GPIOA_OSPEEDR			(*((volatile uint32_t*)0x40020008u))		//Output speed 0x08
//#define GPIOA_PUPDR				(*((volatile uint32_t*)0x4002000Cu))		//0x0C
//#define GPIOA_ODR					(*((volatile uint32_t*)0x40020014u))		//output data
//#define GPIOA_IDR					(*((volatile uint32_t*)0x40020010u))   //input read-only data

volatile GPIO_TypeDef* const PORTA		=	(GPIO_TypeDef*)0x40020000;
volatile GPIO_TypeDef* const PORTB		=	(GPIO_TypeDef*)0x40020400;
volatile GPIO_TypeDef* const PORTC		=	(GPIO_TypeDef*)0x40020800;
volatile GPIO_TypeDef* const PORTD		=	(GPIO_TypeDef*)0x40020C00;
volatile GPIO_TypeDef* const PORTE		=	(GPIO_TypeDef*)0x40021000;
volatile GPIO_TypeDef* const PORTF		=	(GPIO_TypeDef*)0x40021400;
volatile GPIO_TypeDef* const PORTG		=	(GPIO_TypeDef*)0x40021800;
volatile GPIO_TypeDef* const PORTH		=	(GPIO_TypeDef*)0x40021C00;
volatile GPIO_TypeDef* const PORTI		=	(GPIO_TypeDef*)0x40022000;
volatile GPIO_TypeDef* const PORTJ		=	(GPIO_TypeDef*)0x40022400;
volatile GPIO_TypeDef* const PORTK		=	(GPIO_TypeDef*)0x40022800;

volatile RCC_TypeDef*  const RCC		=	(RCC_TypeDef*)0x40023800;

#endif
