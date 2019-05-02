#ifndef RTC_TASK_H_
#define RTC_TASK_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
#include "rtc_lib.h"
//////////////////////////////////////////////////////////////////////////////////////

//===��������
	void SysRTCTask_SoftBuildInit(RTC_HandlerType *RTCx);
	void SysRTCTask_SoftBuildHandle(RTC_HandlerType *RTCx, UINT32_T rtcSecond);
	UINT8_T SysRTCTask_CalcWeekDay(RTC_HandlerType *RTCx);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*RTC_TASK_H_ */