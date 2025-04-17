/**
 * @file gpio.c
 * @author fhc-crick (you@domain.com)
 * @brief 初始化各种GPIO
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#include "gpio.h"

void GPIO_Init(void) {
    FL_GPIO_InitTypeDef GPIO_InitStruct = {
        .pin          = LED1_PIN,
        .mode         = FL_GPIO_MODE_OUTPUT,
        .outputType   = FL_GPIO_OUTPUT_PUSHPULL,
        .pull         = FL_GPIO_PULLUP_ENABLE,
        .remapPin     = FL_GPIO_PINREMAP_FUNCTON1,
        .analogSwitch = FL_DISABLE,
        .driveStrength= FL_GPIO_DRIVESTRENGTH_X2
    };

    if (FL_GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStruct) != FL_PASS) {
        panic("GPIO_Init failed");
    }
}