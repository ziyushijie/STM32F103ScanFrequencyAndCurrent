#include "systick_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：初始化
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T	SysTickLib_Init(void)
{
	return SysTick_Init();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：注销初始化
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T	SysTickLib_DeInit(void)
{
	return SysTick_DeInit();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T	SysTickLib_FuncTick(void(*pFuncTick)(void))
{
	return SysTick_FuncTick(pFuncTick);
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数：
//////功	   能：
//////输入参数:
//////输出参数:
//////说	   明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysTickLib_IRQDecTick(UINT32_T waitDecTick)
{
	return SysTick_IRQDecTick(waitDecTick);
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数：
//////功	   能：
//////输入参数:
//////输出参数:
//////说	   明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysTickLib_DecTick(UINT32_T waitDecTick)
{
	return SysTick_DecTick(waitDecTick);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT32_T SysTickLib_GetTick(void)
{
	return SysTick_GetTick();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T	SysTickLib_IRQTick(void)
{
	return SysTick_IRQTick();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T	SysTickLib_WaitTick(UINT32_T usTime)
{
	return SysTick_WaitTick(usTime);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  SysTickLib_WaitusTick(UINT32_T usTime)
{
	return SysTick_WaitusTick(usTime);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  SysTickLib_1msIncTick(void)
{
	return SysTick_1msIncTick();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT32_T SysTickLib_GetTickOVF(void)
{
	return SysTick_GetTickOVF();
}