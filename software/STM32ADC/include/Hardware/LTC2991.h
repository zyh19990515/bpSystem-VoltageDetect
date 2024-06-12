#ifndef _LTC2991_H
#define _LTC2991_H
#include "stdint.h"

#define LTC2991_SINGLE_ENDED_RATIO 205.18
#define LTC2991_DIFFERENTIAL_RATIO  19.075
#define LTC2991_VCC_RATIO   305.18
#define LTC2991_VCC_BASE    2.5

void LTC2991_WriteReg(uint8_t RegAddress, uint16_t Data);
uint8_t LTC2991_ReadReg(uint8_t RegAddress);
void LTC2991_Init(void);
uint16_t LTC2991_GetVoltageData();

// void LTC2991_GetData(int16_t *CURRENT, int16_t *VBUS, int16_t *POWER);


#endif