#ifndef _SYSSTATUS_H
#define _SYSSTATUS_H

#include "stm32f10x.h"
typedef struct SYSstatus_parameter_all
{
	char T_V_sensor;     //�Ӵ���־
	float A;			 //����ֵ
	//char CurrentFlag; 	 //������־
	char VoltageFlag; 	 //��ѹ��־
	char ChargeFlag;//��ʼ���
}SYSstatus_parameter;


#endif

