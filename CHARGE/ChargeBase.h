#ifndef _CHARGEBASE_H
#define _CHARGEBASE_H
#include "SYSstatus.h"
#include "config.h"
#include "Led.h"
#define UART1_BAUD 9600 

//���׮������Ϣ
//�������⣬һ���̵�������������
typedef struct CChargeBase_parameter_all
{
	CLED_parameter			m_LED;
	SYSstatus_parameter m_SYSstatus;//ϵͳ״̬
	unsigned long m_heartBeat;
}CChargeBase_parameter;

//���׮����
extern CChargeBase_parameter ChargeBase;
void AutoCharging_setup(CChargeBase_parameter *CChargeBase_para);//���׮���ó�ʼ��
void AutoCharging_loop(CChargeBase_parameter *CChargeBase_para);//�ж�
#endif

