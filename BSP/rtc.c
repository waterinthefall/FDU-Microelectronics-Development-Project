/**
 * @file rtc.c
 * @author fhc-crick (2745113217@qq.com)
 * @brief 初始化实时时钟（RTC）模块。
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "rtc.h"
#include "fm33fk5xx.h"
#include "fm33fk5xx_fl_def.h"
#include "fm33fk5xx_fl_rtcb.h"
#include "sys.h"
#include <stdint.h>
#include <string.h>

void RTC_Init(void) {
    FL_RTCB_InitTypeDef RTC_InitStruct = {
        .year = 0x25,
        .month = 0x04,
        .day = 0x17,
        .hour = 0x00,
        .minute = 0x00,
        .second = 0x00
    };

    if (FL_RTCB_Init(RTCB, &RTC_InitStruct) != FL_PASS) {
        panic("RTC initialization failed!");
    }

    FL_CDIF_EnableCPUToVAO(CDIF);
}

/**
 * @brief 返回RTC的当前时间。
 * 
 * @param time 存储当前时间结果的指针。
 * @return FL_ErrorStatus 若读取成功，返回FL_PASS
 */
FL_ErrorStatus RTC_GetTime(FL_RTCB_InitTypeDef *time) {
    FL_RTCB_InitTypeDef time1, time2;
    FL_RTCB_GetTime(RTCB, &time1);
    FL_RTCB_GetTime(RTCB, &time2);

    int i = 0;
    for (i = 0; i < 7; i++) {
        if (((uint32_t*)(&time1))[i] != ((uint32_t*)(&time2))[i]) {
            break;
        }
    }

    if (i != 7) {
        return FL_FAIL;
    }
    memcpy((uint32_t*)(time), (uint32_t*)(&time1), sizeof(uint32_t) * 7);
    return FL_PASS;
}