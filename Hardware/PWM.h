#ifndef __PWM_H
#define __PWM_H
#include "stdint.h"

void PWM_Init(void);
void PWM_SetCompare2(uint16_t Compare);
void PWM_Beep(uint16_t f);



#endif
