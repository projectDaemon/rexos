/*
    RExOS - embedded RTOS
    Copyright (c) 2011-2014, Alexey Kramarenko
    All rights reserved.
*/

#ifndef SYS_CONFIG_H
#define SYS_CONFIG_H

/*
    config.h - userspace config
 */

//if set, after sys startup, __APP REx will be executed
#define SYS_APP                                             1
//add some debug info in SYS
#define SYS_INFO                                            1
//powersave mode.
#define SYS_POWERSAVE                                       0
//----------------------------- objects ----------------------------------------------
//make sure, you know what are you doing, before change
#define SYS_OBJ_STDOUT                                      0
#define SYS_OBJ_STDIN                                       1
#define SYS_OBJ_CORE                                        2
#define SYS_OBJ_UART                                        3

//------------------------------ stdio -----------------------------------------------
#define STDIO_TX_STREAM_SIZE                                64
#define STDIO_RX_STREAM_SIZE                                32
//-------------------------------- USB -----------------------------------------------
//low-level USB debug. Turn on only in case of IO problems
#define USB_DEBUG_REQUESTS                                  0
#define USB_DEBUG_CLASS_REQUESTS                            0
#define USB_DEBUG_ERRORS                                    0

#endif // SYS_CONFIG_H
