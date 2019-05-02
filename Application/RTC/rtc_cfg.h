#ifndef RTC_CFG_H_
#define RTC_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
#include "complier_lib.h"
//////////////////////////////////////////////////////////////////////////////////////

//===外部调用接口
	extern  RTC_HandlerType g_SysSoftRTC;
	extern  pRTC_HandlerType pSysSoftRTC;

	//===函数定义
	void SysRTC_SoftBuildInit(RTC_HandlerType *RTCx);
	void SysRTC_SoftBuildHandle(RTC_HandlerType *RTCx, UINT32_T rtcSecond);
	UINT8_T SysRTC_CalcWeekDay(RTC_HandlerType *RTCx);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*RTC_CFG_H_ */