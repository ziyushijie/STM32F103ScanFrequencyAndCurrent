#ifndef	PID_LIB_H_
#define	PID_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "pid_cfg.h"
	//////////////////////////////////////////////////////////////////////////////////////
	UINT8_T  PIDLib_Init(PID_HandlerType *PIDx, PID_HandlerType pidx);
	float	 PIDLib_PosCalc(PID_HandlerType *PIDx, float setVal);
	float	 PIDLib_IncCalc(PID_HandlerType *PIDx, float setVal);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*PID_LIB_H_ */
