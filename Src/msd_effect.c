/*
 * msd_effect.c
 *
 *  Created on: 28.04.2019
 *      Author: ReQezeR
 */
#include "stm32f4xx_hal.h"
#include <stdlib.h>

#include "ws2812b.h"
#include "ws2812b_fx.h"
#include "msd_effect.h"

void SetSegments()
{
  WS2812BFX_SetSegmentLenght(0,0,5);
  WS2812BFX_SetSegmentLenght(1,6,13);
  WS2812BFX_SetSegmentLenght(2,14,25);
  WS2812BFX_SetSegmentLenght(3,26,33);
  WS2812BFX_SetSegmentLenght(4,34,39);
}

void SetSegmentParams(uint16_t Segment,uint16_t Speed,fx_mode Mode)
{
	WS2812BFX_SetSpeed(Segment, Speed);	// Speed of segment
	WS2812BFX_SetMode(Segment, Mode);
}

int randNumber(int max)
{
	return rand()%max;
}

