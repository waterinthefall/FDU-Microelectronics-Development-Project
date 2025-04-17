/**
 * @file gpio.h
 * @author fhc-crick (2745113217@qq.com)
 * @brief 初始化各种GPIO
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#ifndef _GPIO_H_
#define _GPIO_H_

#include "main.h"
#include "fm33fk5xx_fl_gpio.h"


#define LED1_GPIO_PORT GPIOF
#define LED1_PIN  FL_GPIO_PIN_4




void GPIO_Init(void);

#endif