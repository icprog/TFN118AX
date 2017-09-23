/* Copyright (c) 2012 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */
#ifndef TWI_MASTER_CONFIG
#define TWI_MASTER_CONFIG
#ifdef HARD1
#define TWI_MASTER_CONFIG_CLOCK_PIN_NUMBER (24U)
#define TWI_MASTER_CONFIG_DATA_PIN_NUMBER (23U)
#else
#define TWI_MASTER_CONFIG_CLOCK_PIN_NUMBER (26U)
#define TWI_MASTER_CONFIG_DATA_PIN_NUMBER (23U)
#endif

#if 0
//tp4 AS_SDA --- P0.1  tp3 AS_SCL --- P0.0
#define TWI_MASTER_CONFIG_CLOCK_PIN_NUMBER (0U)
#define TWI_MASTER_CONFIG_DATA_PIN_NUMBER (1U)
#endif

#endif
