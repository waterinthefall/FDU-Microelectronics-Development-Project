/**
 * @file sys.c
 * @author fhc-crick (you@domain.com)
 * @brief 定义一些系统函数
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "sys.h"

/**
 * @brief 处理系统错误。当系统发生影响较大的错误时，可传入报错信息，在调试时查看。
 * 
 * @param msg 报错信息。
 */
void panic(const char *msg) {
    #ifdef DEBUG
        __BKPT();
    #endif
    while (1);
}

void NMI_Handler(void) {
    panic("NMI Occurred!");
}

void HardFault_Handler(void) {
    panic("HardFault Occurred!");
}

void MemManage_Handler(void) {
    panic("MemManage Occurred!");
}

void BusFault_Handler(void) {
    panic("BusFault Occurred!");
}

void UsageFault_Handler(void) {
    panic("UsageFault Occurred!");
}

void SVCall_Handler(void) {
    //TODO
}

void PendSV_Handler(void) {
    //TODO
}

void SysTick_Handler(void) {
    //TODO
}