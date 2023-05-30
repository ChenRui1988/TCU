#include "bsp_user.h"
#include "stdio.h"

extern uint8_t Time_1ms_Flag, Time_5ms_Flag, Time_10ms_Flag, Time_20ms_Flag, Time_50ms_Flag, Time_100ms_Flag, Time_500ms_Flag, Time_1000ms_Flag;


void bsp_application_task_loop(void)
{
	if(Time_1ms_Flag)
	{
		bsp_application_task_1ms();
		Time_1ms_Flag = 0;
	}

	if(Time_5ms_Flag)
	{
		bsp_application_task_5ms();
		Time_5ms_Flag = 0;
	}
	
	if(Time_10ms_Flag)
	{
		bsp_application_task_10ms();
		Time_10ms_Flag = 0;	
	
	}
	if(Time_20ms_Flag)
	{
		bsp_application_task_20ms();
		Time_20ms_Flag = 0;	
	}
	
	if(Time_50ms_Flag)
	{
		bsp_application_task_50ms();
		Time_50ms_Flag = 0;
	}
	
	if(Time_100ms_Flag)
	{
		bsp_application_task_100ms();
		Time_100ms_Flag = 0;	
	}

	if(Time_500ms_Flag)
	{
		bsp_application_task_500ms();
		Time_500ms_Flag = 0;	
	}
	
	if(Time_1000ms_Flag)
	{
		bsp_application_task_1000ms();
		Time_1000ms_Flag = 0;
	}
}

void bsp_application_task_1ms(void)
{

}

void bsp_application_task_5ms(void)
{

}

void bsp_application_task_10ms(void)
{

}

void bsp_application_task_20ms(void)
{

}

void bsp_application_task_50ms(void)
{
	//printf("hellow world\r\n");
}

void bsp_application_task_100ms(void)
{

}

void bsp_application_task_500ms(void)
{
	printf("hello world\r\n");
}

void bsp_application_task_1000ms(void)
{
	printf("hello world11\r\n");
}
