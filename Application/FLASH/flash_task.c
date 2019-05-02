#include "flash_task.h"

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
void FLASHTask_ReadHalfWord(UINT32_T readAddr, UINT16_T *pVal, UINT16_T length)
{
	FLASHLib_ReadHalfWord(readAddr, pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
void FLASHTask_WriteHalfWord(UINT32_T writeAddr, UINT16_T *pVal, UINT16_T length)
{
	FLASHLib_WriteHalfWord(writeAddr, pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
void FLASHTask_WriteHalfWordWithErase(UINT32_T writeAddr, UINT16_T *pVal, UINT16_T length)
{
	FLASHLib_WriteHalfWordWithErase(writeAddr, pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
void FlashTask_LockRead(void)
{
	FlashLib_LockRead();
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
void FlashTask_UnLockRead(void)
{
	FlashLib_LockRead();
}
///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
void FLASHTask_Debug(void)
{
	UINT16_T eepromWTest[5] = { 0x1010,0x2020,0x3030,0x4040,0x5050 };
	UINT16_T eepromRTest[5] = { 0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF };

	//---Flashģ��eeprom�Ĳ���
	FLASHTask_WriteHalfWordWithErase(FLASH_BASE_ADDR, eepromRTest, 5);
	FLASHTask_ReadHalfWord(FLASH_BASE_ADDR, eepromRTest, 5);
	FLASHTask_WriteHalfWordWithErase(FLASH_BASE_ADDR, eepromWTest, 5);
	FLASHTask_ReadHalfWord(FLASH_BASE_ADDR, eepromRTest, 5);
}