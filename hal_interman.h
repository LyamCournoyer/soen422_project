

/* hal_intermain.h 
//
// Copyright (C) 1985-2020 by Michel de Champlain
//
*/
#ifndef __hal_Interrupt_h
#define __hal_Interrupt_h
#include "_stdtype.h"
void hal_Interrupt_Disable(void);
void hal_Interrupt_Enable(void);
u16 hal_Interrupt_SaveAndDisable(void);
void hal_Interrupt_Restore(u16 flags);
void hal_Interrupt_SetVector(u8 number, u32 handlerAddr);
u32 hal_Interrupt_GetVector(u8 number);
#endif