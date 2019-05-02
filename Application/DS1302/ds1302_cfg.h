#ifndef DS1302_CFG_H_
#define DS1302_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "complier_lib.h"
	#include "delay_task.h"
	#include "gpio_task.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//������д�����ݣ��½��ض�ȡ����
	//////////////////////////////////////////////////////////////////////////////////////
	//===оƬ�Ĵ�����ַ���� �����д��ַ������Ҫ+1
	#define DS1302_REG_SECOND					0x80        //�����ݵ�ַ
	#define DS1302_REG_MINUTE					0x82        //�����ݵ�ַ
	#define DS1302_REG_HOUR						0x84        //ʱ���ݵ�ַ
	#define DS1302_REG_DAY						0x86        //�����ݵ�ַ
	#define DS1302_REG_WEEK						0x8A        //���ڼ����ݵ�ַ
	#define DS1302_REG_MONTH					0x88        //�����ݵ�ַ
	#define DS1302_REG_YEAR						0x8C        //�����ݵ�ַ
	#define DS1302_REG_CONTROL					0x8E        //д�����Ĵ�����ַ
	#define DS1302_REG_CHARGER					0x90        //������Ĵ���
	#define DS1302_REG_CLKBURST					0xBE        //���崮�Ĵ���
	#define DS1302_RAM_BASE						0X30        //RAM������ַ
	#define DS1302_BURST_READ_RAM				0xBF		//������ȡ����

	//===�ṹ�嶨��
	typedef struct _DS1302_HandlerType			DS1302_HandlerType;

	//===ָ��ṹ�嶨��
	typedef struct _DS1302_HandlerType			*pDS1302_HandlerType;

	//===OLED�����ݽṹ��
	struct _DS1302_HandlerType
	{
		GPIO_HandlerType	msgCS;					//---CS�˿ں�
		GPIO_HandlerType	msgCLK;					//---CLK�˿ں�
		GPIO_HandlerType	msgDAT;					//---���ݶ˿ں�
		RTC_HandlerType		msgRTC;					//---ʵʱʱ��
		UINT8_T				msgPluseWidth;			//---������ȣ�����ģ��ʹ��
		void(*msgFuncDelayus)(UINT32_T delay);		//---��ʱ����
	};

	//===�����������
	#define DS1302_TASK_ONE							pDS1302Device0
	#define DS1302_TASK_TWO							0
	#define DS1302_TASK_THREE						0

	//===�ⲿ���ýӿ�
	extern DS1302_HandlerType						g_DS1302Device0;
	extern pDS1302_HandlerType						pDS1302Device0;

	//===��������
	UINT8_T DS1302_Init(DS1302_HandlerType *DS1302x, void(*pFuncDelayus)(UINT32_T delay));
	void DS1302_WriteBitLSB(DS1302_HandlerType *DS1302x, UINT8_T wVal, UINT8_T *pRVal);
	void DS1302_WriteByteLSB(DS1302_HandlerType *DS1302x, UINT8_T wVal, UINT8_T *pRVal);
	void DS1302_WriteReg(DS1302_HandlerType *DS1302x, UINT8_T addr, UINT8_T dat);
	void DS1302_ReadReg(DS1302_HandlerType *DS1302x, UINT8_T addr, UINT8_T *pVal);
	void DS1302_WriteTime(DS1302_HandlerType *DS1302x, UINT8_T addr, UINT8_T dat);
	void DS1302_ReadTime(DS1302_HandlerType *DS1302x, UINT8_T addr, UINT8_T *pVal);
	void DS1302_WriteRTC(DS1302_HandlerType *DS1302x, RTC_HandlerType rtcTime);
	void DS1302_ReadRTC(DS1302_HandlerType *DS1302x);

	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*DS1302_CFG_H_ */