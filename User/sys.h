/**
 * @file sys.h
 * @author fhc-crick (2745113217@qq.com)
 * @brief 定义一些系统函数
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _SYS_H_
#define _SYS_H_


/**
 * @brief 处理系统错误。当系统发生影响较大的错误时，可传入报错信息，在调试时查看。
 * 
 * @param msg 报错信息。
 */
void panic(const char *msg);


#endif