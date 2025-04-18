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
#include "fm33fk5xx_fl_rtcb.h"
#include "gpio.h"
#include "rtc.h"

FL_RTCB_InitTypeDef time;

int main() {
    FL_Init();
    FL_DelayMs(500);

    GPIO_Init();
    RTC_Init();

    
    RTC_GetTime(&time);

    while (1) {
        RTC_GetTime(&time);
        FL_GPIO_ToggleOutputPin(LED1_GPIO_PORT, LED1_PIN);
        FL_DelayMs(1000);
    }
    
}