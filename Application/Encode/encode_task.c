#include "encode_task.h"

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
void EncodeTask_Init( void )
{
	EncodeLib_Init();
	EnCodeTask_EepromInit();
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
void EnCodeTask_IRQTask( void )
{
	EnCodeLib_IRQTask();
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
void EnCodeTask_SetChannel(UINT8_T chIndex, UINT8_T isEnCode,UINT8_T isHigh)
{
	EnCodeLib_SetChannel(chIndex, isEnCode,isHigh);
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT8_T EnCodeTask_USART_MenuTask(USART_HandlerType* USARTx)
{
	UINT8_T _return = OK_0;
	//---�ж�������
	if (USARTx->msgRxHandler.pMsgVal[USARTx->msgCmdIndex] == CMD_ENCODE)
	{
		USARTTask_FillMode_Init(USARTx);
		USARTTask_FillMode_AddByte(USARTx, CMD_ENCODE);
		//---��������
		switch (USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex])
		{
			case CMD_ENCODE_CHA_OPEN	:
				EnCodeTask_SetChannel(1, 1,0);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHA_CLOSE	:
				EnCodeTask_SetChannel(1, 0,0);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHB_OPEN	:
				EnCodeTask_SetChannel(2, 1,0);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHB_CLOSE	:
				EnCodeTask_SetChannel(2, 0,0);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHC_OPEN	:
				EnCodeTask_SetChannel(3, 1,0);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHC_CLOSE	:
				EnCodeTask_SetChannel(3, 0,0);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHD_OPEN	:
				EnCodeTask_SetChannel(4, 1,0);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHD_CLOSE	:
				EnCodeTask_SetChannel(4, 0,0);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_DECODE_RST			:
				break;
			case CMD_DECODE_READ		:
				break;
			case CMD_ENCODE_CHA_HIGH	:
				EnCodeTask_SetChannel(1, 1,1);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHB_HIGH	:
				EnCodeTask_SetChannel(2, 1, 1);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHC_HIGH	:
				EnCodeTask_SetChannel(3, 1, 1);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_CHD_HIGH	:
				EnCodeTask_SetChannel(4, 1, 1);
				USARTTask_FillMode_AddByte(USARTx, USARTx->msgRxHandler.pMsgVal[USARTx->msgDataOneIndex]);
				USARTTask_FillMode_AddByte(USARTx, _return);
				//---��������
				EnCodeTask_EepromWrite();
				break;
			case CMD_ENCODE_NONE:
			default:
				_return = ERROR_2;
				break;
		}

		if (_return == OK_0)
		{
			//---��������
			USARTTask_FillMode_WriteSTART(USARTx, 1);
		}
	}
	return _return;
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT8_T EnCodeTask_EepromInit(void)
{
	//---��ȡ��һ�εĲ���
	UINT8_T tempAddrX1[2] = { 0x00,0x00 };
	//---��ȡ�ڶ��εĲ���
	UINT8_T tempAddrX2[2] = { 0x00,0x00 };
	
	//---�ź�ԴCHA��Ĭ�Ϲ���
	AT24CXXTask_I2C_ReadData(pAT24CXXDevice0, ENCODE_GEN_CHANNEL_MASK1_ADDR_X1, tempAddrX1, 2);
	AT24CXXTask_I2C_ReadData(pAT24CXXDevice0, ENCODE_GEN_CHANNEL_MASK1_ADDR_X2, tempAddrX2, 2);
	//---���ݴ�С�ĶԱ�
	if (CompareFun1(tempAddrX1, tempAddrX2, 2) != 0)
	{
		AT24CXXTask_I2C_ReadData(pAT24CXXDevice0, ENCODE_GEN_CHANNEL_MASK1_ADDR_X3, tempAddrX1, 2);
		AT24CXXTask_I2C_WriteData(pAT24CXXDevice0, ENCODE_GEN_CHANNEL_MASK1_ADDR_X1, tempAddrX1, 2);
		AT24CXXTask_I2C_WriteData(pAT24CXXDevice0, ENCODE_GEN_CHANNEL_MASK1_ADDR_X2, tempAddrX1, 2);
	}
	//---�ж������Ƿ�Ϸ�
	if (tempAddrX1[0] != 0xFF)
	{
		g_GenCodeChannelMask1 = tempAddrX1[0];
		g_GenCodeChannelMask2 = tempAddrX1[1];
	}	
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT8_T EnCodeTask_EepromWrite(void)
{
	UINT8_T temp[2] = { g_GenCodeChannelMask1,g_GenCodeChannelMask2 };
	UINT8_T _return = 0;
	//---��һ�α���Ĳ�����λ��
	_return = AT24CXXTask_I2C_WriteData(pAT24CXXDevice0, ENCODE_GEN_CHANNEL_MASK1_ADDR_X1, temp, 2);
	if (_return != 0)
	{
		_return += 1;
	}
	//---�ڶ��α��������λ��
	_return = AT24CXXTask_I2C_WriteData(pAT24CXXDevice0, ENCODE_GEN_CHANNEL_MASK1_ADDR_X2, temp, 2);
	if (_return != 0)
	{
		_return += 1;
	}
	//---�����α��������λ��
	_return = AT24CXXTask_I2C_WriteData(pAT24CXXDevice0,ENCODE_GEN_CHANNEL_MASK1_ADDR_X3, temp, 2);
	if (_return != 0)
	{
		_return += 1;
	}
	return _return;
}