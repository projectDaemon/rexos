/*
    RExOS - embedded RTOS
    Copyright (c) 2011-2015, Alexey Kramarenko
    All rights reserved.
*/

#ifndef ICMP_H
#define ICMP_H

#include "ip.h"
#include "ipc.h"

typedef enum {
    ICMP_PING = IPC_USER
}ICMP_IPCS;

bool icmp_ping(HANDLE tcpip, IP* dst);

#endif // ICMP_H
