/*
 * systicks.h
 *
 *  Created on: 6 de mai de 2020
 *      Author: projeto
 */

#include "stdint.h"

uint32_t g_sys;

#if defined (__cplusplus)
extern "C" {
#endif


  void SysTick_Handler(){
	g_sys--;

}


#if defined (__cplusplus)
}
#endif



