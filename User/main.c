/**
 * @file main.c
 * @author fhc-crick (2745113217@qq.com)
 * @brief 主函数。
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "main.h"
#include "gpio.h"


int main() {
    FL_Init();
    FL_DelayMs(500);

    GPIO_Init();

    while (1) {
        FL_GPIO_ToggleOutputPin(LED1_GPIO_PORT, LED1_PIN);
        FL_DelayMs(1000);
    }
    
}