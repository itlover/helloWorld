/** this is a test for study git gui **/
#include "stm32f10x.h"
#include "uart1.h"
#include <ucos_ii.h>
#include "osEventList.h" 

/*
D2-PA0 高电平点亮
D3-PA1 高电平点亮

S1---PA3  检测低电平
S2---PA8

uart1_rxd--->PA9
uart1_txd--->PA10

*/
void ioTestTask(void *pdata)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
	
	while(1)
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_0);
		GPIO_ResetBits(GPIOA,GPIO_Pin_1);
		OSTimeDlyHMSM(0,0,0,900);
		GPIO_SetBits(GPIOA,GPIO_Pin_0);
		GPIO_SetBits(GPIOA,GPIO_Pin_1);
		OSTimeDlyHMSM(0,0,0,99);
		
	}
}


OS_STK  IOTEST_STK[IOTEST_STK_LEN];
void ioTestTaskCreat (INT8U Prio)
{
  OSTaskCreate(ioTestTask,(void *)0,&IOTEST_STK[IOTEST_STK_LEN-1],Prio);
}

