#ifndef WWDG_LIB_H_
#define WWDG_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include"wwdg_cfg.h"
	/////////////////////////////////////////////////////////////////////////////////////

	//===��������
	UINT8_T WWDGLib_Init(UINT8_T wr, UINT32_T prv);
	UINT8_T WWDGLib_DeInit(void);
	UINT8_T WWDGLib_Reset(void);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*WWDG_LIB_H_ */