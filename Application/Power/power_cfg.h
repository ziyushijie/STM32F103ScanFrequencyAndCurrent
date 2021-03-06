#ifndef POWER_CFG_H_
#define POWER_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "complier_lib.h"
	#include "gpio_task.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//===DPSA使能端口
	#define DPSA_CTRH_PORT						GPIOC
	#define DPSA_CTRH_BIT						LL_GPIO_PIN_13
	#define DPSA_CTRH_STATE						GPIO_GET_STATE(DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_WRITE						GPIO_SET_WRITE(DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_READ						GPIO_SET_READ( DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_OUT_0						GPIO_OUT_0(    DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_OUT_1						GPIO_OUT_1(    DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_OUT_C						GPIO_OUT_C(    DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRL_PORT						GPIOC
	#define DPSA_CTRL_BIT						LL_GPIO_PIN_14
	#define DPSA_CTRL_STATE						GPIO_GET_STATE(DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_WRITE						GPIO_SET_WRITE(DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_READ						GPIO_SET_READ( DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_OUT_0						GPIO_OUT_0(	   DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_OUT_1						GPIO_OUT_1(    DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_OUT_C						GPIO_OUT_C(    DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_POWER_ON						( DPSA_CTRL_OUT_0,DPSA_CTRH_OUT_1 )
	#define DPSA_POWER_OFF						( DPSA_CTRH_OUT_0,DPSA_CTRL_OUT_1 )
	#define DPSA_POWER_HZ						( DPSA_CTRH_OUT_0,DPSA_CTRL_OUT_0 )
	
	//===DPSB使能端口
	#define DPSB_CTRH_PORT						GPIOC
	#define DPSB_CTRH_BIT						LL_GPIO_PIN_15
	#define DPSB_CTRH_STATE						GPIO_GET_STATE(DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_WRITE						GPIO_SET_WRITE(DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_READ						GPIO_SET_READ( DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_OUT_0						GPIO_OUT_0(    DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_OUT_1						GPIO_OUT_1(    DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_OUT_C						GPIO_OUT_C(    DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRL_PORT						GPIOB
	#define DPSB_CTRL_BIT						LL_GPIO_PIN_3
	#define DPSB_CTRL_STATE						GPIO_GET_STATE(DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_WRITE						GPIO_SET_WRITE(DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_READ						GPIO_SET_READ( DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_OUT_0						GPIO_OUT_0(	   DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_OUT_1						GPIO_OUT_1(    DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_OUT_C						GPIO_OUT_C(    DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_POWER_ON						( DPSB_CTRL_OUT_0,DPSB_CTRH_OUT_1 )
	#define DPSB_POWER_OFF						( DPSB_CTRH_OUT_0,DPSB_CTRL_OUT_1 )
	#define DPSB_POWER_HZ						( DPSB_CTRH_OUT_0,DPSB_CTRL_OUT_0 )
	
	//===DPSC使能端口
	#define DPSC_CTRH_PORT						GPIOC
	#define DPSC_CTRH_BIT						LL_GPIO_PIN_6
	#define DPSC_CTRH_STATE						GPIO_GET_STATE(DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_WRITE						GPIO_SET_WRITE(DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_READ						GPIO_SET_READ( DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_OUT_0						GPIO_OUT_0(    DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_OUT_1						GPIO_OUT_1(    DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_OUT_C						GPIO_OUT_C(    DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRL_PORT						GPIOC
	#define DPSC_CTRL_BIT						LL_GPIO_PIN_7
	#define DPSC_CTRL_STATE						GPIO_GET_STATE(DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_WRITE						GPIO_SET_WRITE(DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_READ						GPIO_SET_READ( DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_OUT_0						GPIO_OUT_0(	   DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_OUT_1						GPIO_OUT_1(    DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_OUT_C						GPIO_OUT_C(    DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_POWER_ON						( DPSC_CTRL_OUT_0,DPSC_CTRH_OUT_1 )
	#define DPSC_POWER_OFF						( DPSC_CTRH_OUT_0,DPSC_CTRL_OUT_1 )
	#define DPSC_POWER_HZ						( DPSC_CTRH_OUT_0,DPSC_CTRL_OUT_0 )
	
	//===DPSD使能端口
	#define DPSD_CTRH_PORT						GPIOC
	#define DPSD_CTRH_BIT						LL_GPIO_PIN_8
	#define DPSD_CTRH_STATE						GPIO_GET_STATE(DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_WRITE						GPIO_SET_WRITE(DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_READ						GPIO_SET_READ( DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_OUT_0						GPIO_OUT_0(    DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_OUT_1						GPIO_OUT_1(    DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_OUT_C						GPIO_OUT_C(    DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRL_PORT						GPIOC
	#define DPSD_CTRL_BIT						LL_GPIO_PIN_9
	#define DPSD_CTRL_STATE						GPIO_GET_STATE(DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_WRITE						GPIO_SET_WRITE(DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_READ						GPIO_SET_READ( DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_OUT_0						GPIO_OUT_0(    DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_OUT_1						GPIO_OUT_1(    DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_OUT_C						GPIO_OUT_C(    DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_POWER_ON						( DPSD_CTRL_OUT_0,DPSD_CTRH_OUT_1 )
	#define DPSD_POWER_OFF						( DPSD_CTRH_OUT_0,DPSD_CTRL_OUT_1 )
	#define DPSD_POWER_HZ						( DPSD_CTRH_OUT_0,DPSD_CTRL_OUT_0 )
	
	//===DPS电源控制
	#define DPS_POWER_ON						( DPSA_POWER_ON,DPSB_POWER_ON,DPSC_POWER_ON,DPSD_POWER_ON )
	#define DPS_POWER_OFF						( DPSA_POWER_OFF,DPSB_POWER_OFF,DPSC_POWER_OFF,DPSD_POWER_OFF )
	#define DPS_POWER_HZ						( DPSA_POWER_HZ,DPSB_POWER_HZ,DPSC_POWER_HZ,DPSD_POWER_HZ )
	
	//===函数定义
	void Power_Init(void);
	void Power_DeInit(void);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*POWER_CFG_H_ */