/*
 * ws2812b.h
 *
 *  Created on: 02.04.2019
 *      Author: ReQezeR
 */

#ifndef WS2812B_H_
#define WS2812B_H_
#include "stdint.h"
#include "stm32f4xx_hal.h"

typedef struct ws2812b_color
{
	uint8_t red, green, blue;
} ws2812b_color;

typedef struct ws2812b_config
{
	SPI_HandleTypeDef * spi_handler;
	uint16_t diodes_count;
	ws2812b_color * colors_array;
} ws2812b_config;

ws2812b_config ws2812b_init(SPI_HandleTypeDef * spi_handler, uint16_t diodes_count);
void ws2812b_set_diode_color(ws2812b_config * config, uint16_t diode_id, ws2812b_color color);
void ws2812b_refresh(ws2812b_config * config);


#endif /* WS2812B_H_ */
