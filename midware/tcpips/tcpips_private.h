/*
    RExOS - embedded RTOS
    Copyright (c) 2011-2015, Alexey Kramarenko
    All rights reserved.
*/

#ifndef TCPIPS_PRIVATE_H
#define TCPIPS_PRIVATE_H

#include "../../userspace/array.h"
#include "../../userspace/eth.h"
#include "macs.h"
#include "arp.h"
#include "route.h"
#include "ips.h"
#include "icmp.h"
#include "sys_config.h"

typedef struct _TCPIPS {
    //stack itself - public use
    HANDLE eth, timer;
    unsigned seconds;
    ETH_CONN_TYPE conn;
    //stack itself - private use
    unsigned int io_allocated, tx_count, eth_handle;
    ARRAY* free_io;
    ARRAY* tx_queue;
    bool connected;
    MACS macs;
    TCPIP_ARP arp;
    TCPIP_ROUTE route;
    IPS ips;
#if (ICMP)
    TCPIP_ICMP icmp;
#endif
} TCPIPS;

#endif // TCPIPS_PRIVATE_H
