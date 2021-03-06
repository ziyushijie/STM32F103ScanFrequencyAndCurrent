#include "bkp_cfg.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void  BKP_Init(void)
{
	//---备份域时钟
#ifdef USE_MCU_STM32F1
	LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_BKP);
#else
	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_BKPSRAM);
#endif
	LL_PWR_EnableBkUpAccess();
#ifndef USE_MCU_STM32F1
	LL_PWR_EnableBkUpRegulator();
#endif
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void BKP_DeInit(void)
{
	//---备份域时钟
#ifdef USE_MCU_STM32F1
	LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_BKP);
#else
	LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_BKPSRAM);
#endif
	LL_PWR_DisableBkUpAccess();
#ifndef USE_MCU_STM32F1
	LL_PWR_DisableBkUpRegulator();
#endif
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void BKP_WriteDataToReg(UINT32_T bkpReg, UINT32_T val)
{
#ifdef USE_MCU_STM32F1
	LL_RTC_BKP_SetRegister(BKP, bkpReg, val);
#else
	LL_RTC_BAK_SetRegister(RTC, bkpReg, val);
#endif
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void BKP_WriteToReg(UINT32_T bkpReg, UINT32_T *pVal, UINT8_T length)
{
	UINT8_T i = 0;
	for (i = 0; i < length; i++)
	{
		BKP_WriteDataToReg(bkpReg, pVal[i]);
		bkpReg++;
	}
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT32_T BKP_ReadDataFromReg(UINT32_T bkpReg)
{
#ifdef USE_MCU_STM32F1
	return LL_RTC_BKP_GetRegister(BKP, bkpReg);
#else
	return LL_RTC_BAK_GetRegister(RTC, bkpReg);
#endif
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void BKP_ReadFromReg(UINT32_T bkpReg, UINT32_T *pVal, UINT8_T length)
{
	UINT8_T i = 0;
	for (i = 0; i < length; i++)
	{
		pVal[i] = BKP_ReadDataFromReg(bkpReg);
		bkpReg++;
	}
}