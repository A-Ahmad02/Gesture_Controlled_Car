/******************************************************************************
*Macros for System Control Block Register Addresses
*******************************************************************************/
#define SYSCTL_RCGC_I2C_R			(*((volatile unsigned long*)0x400FE620))
#define SYSCTL_RCGC_UART_R			(*((volatile unsigned long*)0x400FE618))
#define	SYSCTL_RCGC_GPIO_R			(*((volatile unsigned long*)0x400FE608))
#define	SYSCTL_RCGC_TIMER_R			(*((volatile unsigned long*)0x400FE604))

/******************************************************************************
*Macros for NVIC Register Addresses
*******************************************************************************/
#define NVIC_EN0_R					(*((volatile unsigned long*)0xE000E100))
#define NVIC_EN1_R					(*((volatile unsigned long*)0xE000E104))
#define NVIC_PEND0_R				(*((volatile unsigned long*)0xE000E200))
#define NVIC_PEND1_R				(*((volatile unsigned long*)0xE000E204))
#define NVIC_PRI0_R					(*((volatile unsigned long*)0xE000E400))
#define NVIC_PRI1_R					(*((volatile unsigned long*)0xE000E404))
#define NVIC_PRI2_R					(*((volatile unsigned long*)0xE000E400))
#define NVIC_PRI3_R					(*((volatile unsigned long*)0xE000E404))
#define NVIC_PRI4_R					(*((volatile unsigned long*)0xE000E400))
#define NVIC_PRI5_R					(*((volatile unsigned long*)0xE000E404))
#define NVIC_PRI6_R					(*((volatile unsigned long*)0xE000E400))
#define NVIC_PRI7_R					(*((volatile unsigned long*)0xE000E404))
#define NVIC_PRI8_R					(*((volatile unsigned long*)0xE000E400))
#define NVIC_PRI9_R					(*((volatile unsigned long*)0xE000E404))
#define NVIC_PRI10_R				(*((volatile unsigned long*)0xE000E400))
#define NVIC_PRI11_R				(*((volatile unsigned long*)0xE000E404))
#define NVIC_PRI12_R				(*((volatile unsigned long*)0xE000E400))
#define NVIC_PRI13_R				(*((volatile unsigned long*)0xE000E404))
#define NVIC_PRI14_R				(*((volatile unsigned long*)0xE000E400))
#define NVIC_PRI15_R				(*((volatile unsigned long*)0xE000E404))

/******************************************************************************
*Macros for TIMER Register Addresses
*******************************************************************************/
#define 	GPTM_TIMER0_CFG			(*((volatile unsigned long*)0x40030000))
#define 	GPTM_TIMER0A_M_R		(*((volatile unsigned long*)0x40030004))
#define 	GPTM_TIMER0B_M_R		(*((volatile unsigned long*)0x40030008))
#define 	GPTM_TIMER0_CTL_R		(*((volatile unsigned long*)0x4003000C))
#define 	GPTM_TIMER0_IM_R		(*((volatile unsigned long*)0x40030018))
#define 	GPTM_TIMER0_IC_R		(*((volatile unsigned long*)0x40030024))
#define 	GPTM_TIMER0A_IL_R		(*((volatile unsigned long*)0x40030028))
#define 	GPTM_TIMER0B_IL_R		(*((volatile unsigned long*)0x4003002C))
#define 	GPTM_TIMER0A_MATCH_R	(*((volatile unsigned long*)0x40030000))
#define 	GPTM_TIMER0B_MATCH_R	(*((volatile unsigned long*)0x40030000))
#define 	GPTM_TIMER0A_PSC_R		(*((volatile unsigned long*)0x40030000))
#define 	GPTM_TIMER0B_PSC_R		(*((volatile unsigned long*)0x40030000))

/******************************************************************************
*Macros for I2C Register Addresses
*******************************************************************************/
#define 	I2C0_MSA_R				(*((volatile unsigned long*)0x40020000))
#define 	I2C0_MCS_R				(*((volatile unsigned long*)0x40020004))
#define 	I2C0_MDR_R				(*((volatile unsigned long*)0x40020008))
#define 	I2C0_MTPR_R				(*((volatile unsigned long*)0x4002000C))
#define 	I2C0_MIMR_R				(*((volatile unsigned long*)0x40020010))
#define 	I2C0_MRIS_R				(*((volatile unsigned long*)0x40020014))
#define 	I2C0_MIMS_R				(*((volatile unsigned long*)0x40020018))
#define 	I2C0_MICR_R				(*((volatile unsigned long*)0x4002001C))
#define 	I2C0_MCR_R				(*((volatile unsigned long*)0x40020020))
#define 	I2C0_MCLKOCNT_R			(*((volatile unsigned long*)0x40020024))
#define 	I2C0_MBMON_R			(*((volatile unsigned long*)0x4002002C))
#define 	I2C0_MCR2_R				(*((volatile unsigned long*)0x40020038))

/******************************************************************************
*Macros for UART Register Addresses
*******************************************************************************/
#define 	UART0_DR_R				(*((volatile unsigned long*)0x4000C000))
#define 	UART0_FR_R				(*((volatile unsigned long*)0x4000C018))
#define  	UART0_IBRD_R			(*((volatile unsigned long*)0x4000C024))
#define  	UART0_FBRD_R			(*((volatile unsigned long*)0x4000C028))
#define 	UART0_LCRH_R			(*((volatile unsigned long*)0x4000C02C))
#define 	UART0_CTL_R				(*((volatile unsigned long*)0x4000C030))
#define 	UART0_CC_R				(*((volatile unsigned long*)0x4000CFC8))
#define  	UART0_IFLS_R			(*((volatile unsigned long*)0x4000C034))
#define 	UART0_IM_R				(*((volatile unsigned long*)0x4000C038))
#define 	UART0_MIS_R				(*((volatile unsigned long*)0x4000C03C))
#define 	UART0_RIS_R				(*((volatile unsigned long*)0x4000C040))
#define 	UART0_ICR_R				(*((volatile unsigned long*)0x4000C044))

#define 	UART2_DR_R				(*((volatile unsigned long*)0x4000E000))
#define 	UART2_FR_R				(*((volatile unsigned long*)0x4000E018))
#define  	UART2_IBRD_R			(*((volatile unsigned long*)0x4000E024))
#define  	UART2_FBRD_R			(*((volatile unsigned long*)0x4000E028))
#define 	UART2_LCRH_R			(*((volatile unsigned long*)0x4000E02C))
#define 	UART2_CTL_R				(*((volatile unsigned long*)0x4000E030))
#define 	UART2_CC_R				(*((volatile unsigned long*)0x4000EFC8))
#define  	UART2_IFLS_R			(*((volatile unsigned long*)0x4000E034))
#define 	UART2_IM_R				(*((volatile unsigned long*)0x4000E038))
#define 	UART2_MIS_R				(*((volatile unsigned long*)0x4000E03C))
#define 	UART2_RIS_R				(*((volatile unsigned long*)0x4000E040))
#define 	UART2_ICR_R				(*((volatile unsigned long*)0x4000E044))

#define 	UART5_DR_R				(*((volatile unsigned long*)0x40011000))
#define 	UART5_FR_R				(*((volatile unsigned long*)0x40011018))
#define  	UART5_IBRD_R			(*((volatile unsigned long*)0x40011024))
#define  	UART5_FBRD_R			(*((volatile unsigned long*)0x40011028))
#define 	UART5_LCRH_R			(*((volatile unsigned long*)0x4001102C))
#define 	UART5_CTL_R				(*((volatile unsigned long*)0x40011030))
#define 	UART5_CC_R				(*((volatile unsigned long*)0x40011FC8))
#define  	UART5_IFLS_R			(*((volatile unsigned long*)0x40011034))
#define 	UART5_IM_R				(*((volatile unsigned long*)0x40011038))
#define 	UART5_MIS_R				(*((volatile unsigned long*)0x4001103C))
#define 	UART5_RIS_R				(*((volatile unsigned long*)0x40011040))
#define 	UART5_ICR_R				(*((volatile unsigned long*)0x40011044))

/******************************************************************************
*Macros for GPIO Register Addresses
*******************************************************************************/
#define GPIO_PORTA_DATA_R			(*((volatile unsigned long*)0x400043FC))
#define GPIO_PORTA_DIR_R			(*((volatile unsigned long*)0x40004400))
#define GPIO_PORTA_IS_R				(*((volatile unsigned long*)0x40004404))
#define GPIO_PORTA_IBE_R			(*((volatile unsigned long*)0x40004408))
#define GPIO_PORTA_IEV_R			(*((volatile unsigned long*)0x4000440C))
#define GPIO_PORTA_IM_R				(*((volatile unsigned long*)0x40004410))
#define GPIO_PORTA_RIS_R			(*((volatile unsigned long*)0x40004414))
#define GPIO_PORTA_MIS_R			(*((volatile unsigned long*)0x40004418))
#define GPIO_PORTA_ICR_R			(*((volatile unsigned long*)0x4000441C))
#define GPIO_PORTA_AFSEL_R		(*((volatile unsigned long*)0x40004420))
#define GPIO_PORTA_OD_R				(*((volatile unsigned long*)0x4000450C))
#define GPIO_PORTA_PUR_R			(*((volatile unsigned long*)0x40004510))
#define GPIO_PORTA_PDR_R			(*((volatile unsigned long*)0x40004514))
#define GPIO_PORTA_DEN_R			(*((volatile unsigned long*)0x4000451C))
#define GPIO_PORTA_LOCK_R			(*((volatile unsigned long*)0x40004520))
#define GPIO_PORTA_CR_R				(*((volatile unsigned long*)0x40004524))
#define GPIO_PORTA_PCTL_R			(*((volatile unsigned long*)0x4000452C))

#define GPIO_PORTB_DATA_R			(*((volatile unsigned long*)0x400053FC))
#define GPIO_PORTB_DIR_R			(*((volatile unsigned long*)0x40005400))
#define GPIO_PORTB_IS_R				(*((volatile unsigned long*)0x40005404))
#define GPIO_PORTB_IBE_R			(*((volatile unsigned long*)0x40005408))
#define GPIO_PORTB_IEV_R			(*((volatile unsigned long*)0x4000540C))
#define GPIO_PORTB_IM_R				(*((volatile unsigned long*)0x40005410))
#define GPIO_PORTB_RIS_R			(*((volatile unsigned long*)0x40005414))
#define GPIO_PORTB_MIS_R			(*((volatile unsigned long*)0x40005418))
#define GPIO_PORTB_ICR_R			(*((volatile unsigned long*)0x4000541C))
#define GPIO_PORTB_AFSEL_R		(*((volatile unsigned long*)0x40005420))
#define GPIO_PORTB_OD_R				(*((volatile unsigned long*)0x4000550C))
#define GPIO_PORTB_PUR_R			(*((volatile unsigned long*)0x40005510))
#define GPIO_PORTB_PDR_R			(*((volatile unsigned long*)0x40005514))
#define GPIO_PORTB_DEN_R			(*((volatile unsigned long*)0x4000551C))
#define GPIO_PORTB_LOCK_R			(*((volatile unsigned long*)0x40005520))
#define GPIO_PORTB_CR_R				(*((volatile unsigned long*)0x40005524))
#define GPIO_PORTB_PCTL_R			(*((volatile unsigned long*)0x4000552C))

#define GPIO_PORTC_DATA_R			(*((volatile unsigned long*)0x400063FC))
#define GPIO_PORTC_DIR_R			(*((volatile unsigned long*)0x40006400))
#define GPIO_PORTC_IS_R				(*((volatile unsigned long*)0x40006404))
#define GPIO_PORTC_IBE_R			(*((volatile unsigned long*)0x40006408))
#define GPIO_PORTC_IEV_R			(*((volatile unsigned long*)0x4000640C))
#define GPIO_PORTC_IM_R				(*((volatile unsigned long*)0x40006410))
#define GPIO_PORTC_RIS_R			(*((volatile unsigned long*)0x40006414))
#define GPIO_PORTC_MIS_R			(*((volatile unsigned long*)0x40006418))
#define GPIO_PORTC_ICR_R			(*((volatile unsigned long*)0x4000641C))
#define GPIO_PORTC_AFSEL_R		(*((volatile unsigned long*)0x40006420))
#define GPIO_PORTC_OD_R				(*((volatile unsigned long*)0x4000650C))
#define GPIO_PORTC_PUR_R			(*((volatile unsigned long*)0x40006510))
#define GPIO_PORTC_PDR_R			(*((volatile unsigned long*)0x40006514))
#define GPIO_PORTC_DEN_R			(*((volatile unsigned long*)0x4000651C))
#define GPIO_PORTC_LOCK_R			(*((volatile unsigned long*)0x40006520))
#define GPIO_PORTC_CR_R				(*((volatile unsigned long*)0x40006524))
#define GPIO_PORTC_PCTL_R			(*((volatile unsigned long*)0x4000652C))

#define GPIO_PORTD_DATA_R			(*((volatile unsigned long*)0x400073FC))
#define GPIO_PORTD_DIR_R			(*((volatile unsigned long*)0x40007400))
#define GPIO_PORTD_IS_R				(*((volatile unsigned long*)0x40007404))
#define GPIO_PORTD_IBE_R			(*((volatile unsigned long*)0x40007408))
#define GPIO_PORTD_IEV_R			(*((volatile unsigned long*)0x4000740C))
#define GPIO_PORTD_IM_R				(*((volatile unsigned long*)0x40007410))
#define GPIO_PORTD_RIS_R			(*((volatile unsigned long*)0x40007414))
#define GPIO_PORTD_MIS_R			(*((volatile unsigned long*)0x40007418))
#define GPIO_PORTD_ICR_R			(*((volatile unsigned long*)0x4000741C))
#define GPIO_PORTD_AFSEL_R		(*((volatile unsigned long*)0x40007420))
#define GPIO_PORTD_OD_R				(*((volatile unsigned long*)0x4000750C))
#define GPIO_PORTD_PUR_R			(*((volatile unsigned long*)0x40007510))
#define GPIO_PORTD_PDR_R			(*((volatile unsigned long*)0x40007514))
#define GPIO_PORTD_DEN_R			(*((volatile unsigned long*)0x4000751C))
#define GPIO_PORTD_LOCK_R			(*((volatile unsigned long*)0x40007520))
#define GPIO_PORTD_CR_R				(*((volatile unsigned long*)0x40007524))
#define GPIO_PORTD_PCTL_R			(*((volatile unsigned long*)0x4000752C))

#define GPIO_PORTE_DATA_R			(*((volatile unsigned long*)0x400243FC))
#define GPIO_PORTE_DIR_R			(*((volatile unsigned long*)0x40024400))
#define GPIO_PORTE_IS_R				(*((volatile unsigned long*)0x40024404))
#define GPIO_PORTE_IBE_R			(*((volatile unsigned long*)0x40024408))
#define GPIO_PORTE_IEV_R			(*((volatile unsigned long*)0x4002440C))
#define GPIO_PORTE_IM_R				(*((volatile unsigned long*)0x40024410))
#define GPIO_PORTE_RIS_R			(*((volatile unsigned long*)0x40024414))
#define GPIO_PORTE_MIS_R			(*((volatile unsigned long*)0x40024418))
#define GPIO_PORTE_ICR_R			(*((volatile unsigned long*)0x4002441C))
#define GPIO_PORTE_AFSEL_R		(*((volatile unsigned long*)0x40024420))
#define GPIO_PORTE_OD_R				(*((volatile unsigned long*)0x4002450C))
#define GPIO_PORTE_PUR_R			(*((volatile unsigned long*)0x40024510))
#define GPIO_PORTE_PDR_R			(*((volatile unsigned long*)0x40024514))
#define GPIO_PORTE_DEN_R			(*((volatile unsigned long*)0x4002451C))
#define GPIO_PORTE_LOCK_R			(*((volatile unsigned long*)0x40024520))
#define GPIO_PORTE_CR_R				(*((volatile unsigned long*)0x40024524))
#define GPIO_PORTE_PCTL_R			(*((volatile unsigned long*)0x4002452C))

#define GPIO_PORTF_DATA_R			(*((volatile unsigned long*)0x400253FC))
#define GPIO_PORTF_DIR_R			(*((volatile unsigned long*)0x40025400))
#define GPIO_PORTF_IS_R				(*((volatile unsigned long*)0x40025404))
#define GPIO_PORTF_IBE_R			(*((volatile unsigned long*)0x40025408))
#define GPIO_PORTF_IEV_R			(*((volatile unsigned long*)0x4002540C))
#define GPIO_PORTF_IM_R				(*((volatile unsigned long*)0x40025410))
#define GPIO_PORTF_RIS_R			(*((volatile unsigned long*)0x40025414))
#define GPIO_PORTF_MIS_R			(*((volatile unsigned long*)0x40025418))
#define GPIO_PORTF_ICR_R			(*((volatile unsigned long*)0x4002541C))
#define GPIO_PORTF_AFSEL_R		(*((volatile unsigned long*)0x40025420))
#define GPIO_PORTF_OD_R				(*((volatile unsigned long*)0x4002550C))
#define GPIO_PORTF_PUR_R			(*((volatile unsigned long*)0x40025510))
#define GPIO_PORTF_PDR_R			(*((volatile unsigned long*)0x40025514))
#define GPIO_PORTF_DEN_R			(*((volatile unsigned long*)0x4002551C))
#define GPIO_PORTF_LOCK_R			(*((volatile unsigned long*)0x40025520))
#define GPIO_PORTF_CR_R				(*((volatile unsigned long*)0x40025524))
#define GPIO_PORTF_PCTL_R			(*((volatile unsigned long*)0x4002552C))