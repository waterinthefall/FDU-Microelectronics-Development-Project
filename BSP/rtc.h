/**
 * @file rtc.h
 * @author fhc-crick (2745113217@qq.com)
 * @brief 配置实时时钟（RTC）模块。
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _RTC_H_
#define _RTC_H_

#include "main.h"
#include "sys.h"
#include "fm33fk5xx_fl_rtcb.h"

/**
 * @brief 初始化RTC模块。
 * 
 */
void RTC_Init(void);

/**
 * @brief 返回RTC的当前时间。
 * 
 * @param time 存储当前时间结果的指针。
 * @return FL_ErrorStatus 若读取成功，返回FL_PASS
 */
FL_ErrorStatus RTC_GetTime(FL_RTCB_InitTypeDef *time);

#endif