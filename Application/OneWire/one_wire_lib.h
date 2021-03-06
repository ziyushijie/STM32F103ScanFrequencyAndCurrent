#ifndef ONE_WIRE_LIB_H_
#define ONE_WIRE_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "one_wire_cfg.h"
	///////////////////////////////////////////////////////////////////////////////////////
	//===��������
	UINT8_T OneWireLib_Init(OneWire_HandlerType *OneWirex, void(*pFuncDelayus)(UINT32_T delay));
	UINT8_T OneWireLib_DeInit(OneWire_HandlerType *OneWirex);
	UINT8_T OneWireLib_START(OneWire_HandlerType *OneWirex);
	UINT8_T OneWireLib_WriteByte(OneWire_HandlerType *OneWirex, UINT8_T val);
	UINT8_T OneWireLib_ReadByte(OneWire_HandlerType *OneWirex);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*ONE_WIRE_LIB_H_ */