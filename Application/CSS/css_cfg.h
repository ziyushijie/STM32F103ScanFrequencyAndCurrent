#ifndef CSS_CFG_H_
#define CSS_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
#include "complier_lib.h"
//////////////////////////////////////////////////////////////////////////////////////

//===��������
	void CSS_Init(void);
	void CSS_DeInit(void);
	void CSS_NMI_IRQ(void);
	void CSS_RCC_IRQ(void);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*CSS_CFG_H_ */