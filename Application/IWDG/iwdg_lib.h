#ifndef IWDG_LIB_H_
#define IWDG_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	//===定义使用的头文件
	#include "iwdg_cfg.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//===函数定义
	UINT8_T IWDGLib_Init(void);
	UINT8_T IWDGLib_DeInit(void);
	UINT8_T IWDGLib_Reset(void);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*IWDG_LIB_H_ */