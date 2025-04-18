/**
  *******************************************************************************************************
  * @file    fm33fk5xx_fl_conf.h
  * @author  FMSH Application Team
  * @brief   Header file of FL Driver Library Configurations
  *******************************************************************************************************
  * @attention
  *
  * Copyright (c) [2021] [Fudan Microelectronics]
  * THIS SOFTWARE is licensed under Mulan PSL v2.
  * You can use this software according to the terms and conditions of the Mulan PSL v2.
  * You may obtain a copy of Mulan PSL v2 at:
  *          http://license.coscl.org.cn/MulanPSL2
  * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
  * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
  * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
  * See the Mulan PSL v2 for more details.
  *
  *******************************************************************************************************
  */

/* Define to prevent recursive inclusion --------------------------------------------------------------*/
#ifndef __FM33FK5XX_FL_CONF_H
#define __FM33FK5XX_FL_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

/* Defines --------------------------------------------------------------------------------------------*/

/**
  * @brief List of drivers to be used.
  *
  * @note Uncomment following lines to disable specified driver.
  */
#define FL_ADC_DRIVER_ENABLED
#define FL_AES_DRIVER_ENABLED
#define FL_ATIM_DRIVER_ENABLED
#define FL_BSTIM16_DRIVER_ENABLED
#define FL_CAN_DRIVER_ENABLED
#define FL_CDIF_DRIVER_ENABLED
#define FL_CMU_DRIVER_ENABLED
#define FL_COMP_DRIVER_ENABLED
#define FL_CRC_DRIVER_ENABLED
#define FL_DAC_DRIVER_ENABLED
#define FL_DMA_DRIVER_ENABLED
#define FL_EPWM_DRIVER_ENABLED
#define FL_EPSC_DRIVER_ENABLED
#define FL_EXTI_DRIVER_ENABLED
#define FL_FLASH_DRIVER_ENABLED
#define FL_GPIO_DRIVER_ENABLED
#define FL_GPTIM_DRIVER_ENABLED
#define FL_I2C_MASTER_DRIVER_ENABLED
#define FL_I2C_SMBUS_DRIVER_ENABLED
#define FL_IWDT_DRIVER_ENABLED
#define FL_LPTIM16_DRIVER_ENABLED
#define FL_LPUART_DRIVER_ENABLED
#define FL_OPA_DRIVER_ENABLED
#define FL_PGL_DRIVER_ENABLED
#define FL_PMU_DRIVER_ENABLED
#define FL_RMU_DRIVER_ENABLED
#define FL_RNG_DRIVER_ENABLED
#define FL_RTC_DRIVER_ENABLED
#define FL_SPI_DRIVER_ENABLED
#define FL_SVD_DRIVER_ENABLED
#define FL_UART_DRIVER_ENABLED
#define FL_VAO_DRIVER_ENABLED
#define FL_VREFP_DRIVER_ENABLED
#define FL_WWDT_DRIVER_ENABLED

/* Device Includes ------------------------------------------------------------------------------------*/
/**
  * @brief Include peripheral's header file
  */

#if defined(FL_ADC_DRIVER_ENABLED)
#include "fm33fk5xx_fl_adc.h"
#endif /* FL_ADC_DRIVER_ENABLED */

#if defined(FL_AES_DRIVER_ENABLED)
#include "fm33fk5xx_fl_aes.h"
#endif /* FL_AES_DRIVER_ENABLED */

#if defined(FL_ATIM_DRIVER_ENABLED)
#include "fm33fk5xx_fl_atim.h"
#endif /* FL_ATIM_DRIVER_ENABLED */

#if defined(FL_BSTIM16_DRIVER_ENABLED)
#include "fm33fk5xx_fl_bstim16.h"
#endif /* FL_BSTIM32_DRIVER_ENABLED */

#if defined(FL_CAN_DRIVER_ENABLED)
#include "fm33fk5xx_fl_can.h"
#endif /* FL_FSCAN_DRIVER_ENABLED */

#if defined(FL_CDIF_DRIVER_ENABLED)
#include "fm33fk5xx_fl_cdif.h"
#endif /* FL_CDIF_DRIVER_ENABLED */

#if defined(FL_CMU_DRIVER_ENABLED)
#include "fm33fk5xx_fl_cmu.h"
#endif /* FL_RCC_DRIVER_ENABLED */

#if defined(FL_COMP_DRIVER_ENABLED)
#include "fm33fk5xx_fl_comp.h"
#endif /* FL_COMP_DRIVER_ENABLED */

#if defined(FL_CRC_DRIVER_ENABLED)
#include "fm33fk5xx_fl_crc.h"
#endif /* FL_CRC_DRIVER_ENABLED */

#if defined(FL_DAC_DRIVER_ENABLED)
#include "fm33fk5xx_fl_dac.h"
#endif /* FL_DAC_DRIVER_ENABLED */

#if defined(FL_DMA_DRIVER_ENABLED)
#include "fm33fk5xx_fl_dma.h"
#endif /* FL_DMA_DRIVER_ENABLED */

#if defined(FL_EPWM_DRIVER_ENABLED)
#include "fm33fk5xx_fl_epwm.h"
#endif /* FL_ADC_DRIVER_ENABLED */

#if defined(FL_EPSC_DRIVER_ENABLED)
#include "fm33fk5xx_fl_epsc.h"
#endif /* FL_EPSC_DRIVER_ENABLED */

#if defined(FL_EXTI_DRIVER_ENABLED)
#include "fm33fk5xx_fl_exti.h"
#endif /* FL_EXTI_DRIVER_ENABLED */

#if defined(FL_FLASH_DRIVER_ENABLED)
#include "fm33fk5xx_fl_flash.h"
#endif /* FL_FLASH_DRIVER_ENABLED */

#if defined(FL_GPIO_DRIVER_ENABLED)
#include "fm33fk5xx_fl_gpio.h"
#endif /* FL_GPIO_DRIVER_ENABLED */

#if defined(FL_GPTIM_DRIVER_ENABLED)
#include "fm33fk5xx_fl_gptim.h"
#endif /* FL_GPTIM_DRIVER_ENABLED */

#if defined(FL_I2C_MASTER_DRIVER_ENABLED)
#include "fm33fk5xx_fl_i2c_master.h"
#endif /* FL_I2C_MASTER_DRIVER_ENABLED */

#if defined(FL_I2C_SMBUS_DRIVER_ENABLED)
#include "fm33fk5xx_fl_i2c_smbus.h"
#endif /* FL_I2C_SMBUS_DRIVER_ENABLED */

#if defined(FL_IWDT_DRIVER_ENABLED)
#include "fm33fk5xx_fl_iwdt.h"
#endif /* FL_IWDT_DRIVER_ENABLED */

#if defined(FL_LPTIM16_DRIVER_ENABLED)
#include "fm33fk5xx_fl_lptim16.h"
#endif /* FL_LPTIM32_DRIVER_ENABLED */

#if defined(FL_LPUART_DRIVER_ENABLED)
#include "fm33fk5xx_fl_lpuart.h"
#endif /* FL_LPUART_DRIVER_ENABLED */

#if defined(FL_OPA_DRIVER_ENABLED)
#include "fm33fk5xx_fl_opa.h"
#endif /* FL_ADC_DRIVER_ENABLED */

#if defined(FL_PGL_DRIVER_ENABLED)
#include "fm33fk5xx_fl_pgl.h"
#endif /* FL_PGL_DRIVER_ENABLED */

#if defined(FL_PMU_DRIVER_ENABLED)
#include "fm33fk5xx_fl_pmu.h"
#endif /* FL_PMU_DRIVER_ENABLED */

#if defined(FL_RMU_DRIVER_ENABLED)
#include "fm33fk5xx_fl_rmu.h"
#endif /* FL_RMU_DRIVER_ENABLED */

#if defined(FL_RNG_DRIVER_ENABLED)
#include "fm33fk5xx_fl_rng.h"
#endif /* FL_RNG_DRIVER_ENABLED */

#if defined(FL_RTC_DRIVER_ENABLED)
#include "fm33fk5xx_fl_rtcb.h"
#endif /* FL_RTC_DRIVER_ENABLED */

#if defined(FL_SPI_DRIVER_ENABLED)
#include "fm33fk5xx_fl_spi.h"
#endif /* FL_SPI_DRIVER_ENABLED */

#if defined(FL_SVD_DRIVER_ENABLED)
#include "fm33fk5xx_fl_svd.h"
#endif /* FL_SVD_DRIVER_ENABLED */

#if defined(FL_UART_DRIVER_ENABLED)
#include "fm33fk5xx_fl_uart.h"
#endif /* FL_UART_DRIVER_ENABLED */

#if defined(FL_VAO_DRIVER_ENABLED)
#include "fm33fk5xx_fl_vao.h"
#endif /* FL_VAO_DRIVER_ENABLED */

#if defined(FL_VREFP_DRIVER_ENABLED)
#include "fm33fk5xx_fl_vrefp.h"
#endif /* FL_VREF_DRIVER_ENABLED */

#if defined(FL_WWDT_DRIVER_ENABLED)
#include "fm33fk5xx_fl_wwdt.h"
#endif /* FL_WWDT_DRIVER_ENABLED */

#ifdef __cplusplus
}
#endif

#endif /* __FM33FK5XX_FL_CONF_H */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
