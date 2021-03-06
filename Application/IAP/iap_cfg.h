#ifndef IAP_CFG_H_
#define IAP_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "complier_lib.h"
	
	//===定义一个函数类型的参数
	typedef  void(*iapFun)(void);

	//===函数定义
	void IAP_ToAPP(UINT32_T appAddr);
	void IAP_ToIAP(UINT32_T iapAddr);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*IAP_CFG_H_ */