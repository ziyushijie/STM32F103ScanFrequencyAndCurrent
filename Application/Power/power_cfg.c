#include "power_cfg.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void Power_Init(void)
{
	//---使能GPIO的时钟
	GPIOTask_Clock(DPSA_CTRH_PORT, 1);
	GPIOTask_Clock(DPSA_CTRL_PORT, 1);

	GPIOTask_Clock(DPSB_CTRH_PORT, 1);
	GPIOTask_Clock(DPSB_CTRL_PORT, 1);

	GPIOTask_Clock(DPSC_CTRH_PORT, 1);
	GPIOTask_Clock(DPSC_CTRL_PORT, 1);

	GPIOTask_Clock(DPSD_CTRH_PORT, 1);
	GPIOTask_Clock(DPSD_CTRL_PORT, 1);

	//---GPIO的结构体
	LL_GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;						//---配置状态为输出模式
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_MEDIUM;				//---GPIO的速度---低速设备
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;			//---输出模式---推挽输出
	GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;							//---上拉
#ifndef USE_MCU_STM32F1
	GPIO_InitStruct.Alternate = LL_GPIO_AF_0;						//---端口复用模式
#endif

	//---DPSA_CTRH_BIT的初始化
	GPIO_InitStruct.Pin = DPSA_CTRH_BIT;
	LL_GPIO_Init(DPSA_CTRH_PORT, &GPIO_InitStruct);
	GPIO_OUT_0(DPSA_CTRH_PORT, DPSA_CTRH_BIT);

	//---DPSA_CTRL_BIT的初始化
	GPIO_InitStruct.Pin = DPSA_CTRL_BIT;
	LL_GPIO_Init(DPSA_CTRL_PORT, &GPIO_InitStruct);
	GPIO_OUT_0(DPSA_CTRL_PORT, DPSA_CTRL_BIT);

	//---DPSB_CTRH_BIT的初始化
	GPIO_InitStruct.Pin = DPSB_CTRH_BIT;
	LL_GPIO_Init(DPSB_CTRH_PORT, &GPIO_InitStruct);
	GPIO_OUT_0(DPSB_CTRH_PORT, DPSB_CTRH_BIT);

	//---DPSB_CTRL_BIT的初始化
	GPIO_InitStruct.Pin = DPSB_CTRL_BIT;
	LL_GPIO_Init(DPSB_CTRL_PORT, &GPIO_InitStruct);
	GPIO_OUT_0(DPSB_CTRL_PORT, DPSB_CTRL_BIT);

	//---DPSC_CTRH_BIT的初始化
	GPIO_InitStruct.Pin = DPSC_CTRH_BIT;
	LL_GPIO_Init(DPSC_CTRH_PORT, &GPIO_InitStruct);
	GPIO_OUT_0(DPSC_CTRH_PORT, DPSC_CTRH_BIT);

	//---DPSC_CTRL_BIT的初始化
	GPIO_InitStruct.Pin = DPSC_CTRL_BIT;
	LL_GPIO_Init(DPSC_CTRL_PORT, &GPIO_InitStruct);
	GPIO_OUT_0(DPSC_CTRL_PORT, DPSC_CTRL_BIT);

	//---DPSD_CTRH_BIT的初始化
	GPIO_InitStruct.Pin = DPSD_CTRH_BIT;
	LL_GPIO_Init(DPSD_CTRH_PORT, &GPIO_InitStruct);
	GPIO_OUT_0(DPSD_CTRH_PORT, DPSD_CTRH_BIT);

	//---DPSD_CTRL_BIT的初始化
	GPIO_InitStruct.Pin = DPSD_CTRL_BIT;
	LL_GPIO_Init(DPSD_CTRL_PORT, &GPIO_InitStruct);
	GPIO_OUT_0(DPSD_CTRL_PORT, DPSD_CTRL_BIT);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：电源出于高阻状态
//////////////////////////////////////////////////////////////////////////////
void Power_DeInit(void)
{
	DPSA_POWER_HZ;
	DPSB_POWER_HZ;
	DPSC_POWER_HZ;
	DPSD_POWER_HZ;
}