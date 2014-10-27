/*
    RExOS - embedded RTOS
    Copyright (c) 2011-2014, Alexey Kramarenko
    All rights reserved.
*/

#ifndef STM32_CORE_H
#define STM32_CORE_H

#include "../sys.h"
#include "../../userspace/process.h"
#include "stm32_config.h"
#include "sys_config.h"

typedef struct _CORE CORE;

typedef enum {
    //power
    STM32_POWER_GET_CLOCK = HAL_IPC(HAL_POWER),
    STM32_POWER_UPDATE_CLOCK,
    STM32_POWER_GET_RESET_REASON,
    STM32_POWER_DMA_ON,
    STM32_POWER_DMA_OFF,
    STM32_POWER_USB_ON,
    STM32_POWER_USB_OFF
} STM32_CORE_IPCS;

typedef enum {
    RESET_REASON_UNKNOWN    = 0,
    RESET_REASON_LOW_POWER,
    RESET_REASON_WATCHDOG,
    RESET_REASON_SOFTWARE,
    RESET_REASON_POWERON,
    RESET_REASON_PIN_RST
} RESET_REASON;

extern const REX __STM32_CORE;

#endif // STM32_CORE_H
