/*
    RExOS - embedded RTOS
    Copyright (c) 2011-2015, Alexey Kramarenko
    All rights reserved.
*/

#include "stdlib.h"
#include "systime.h"
#include "process.h"

unsigned int srand()
{
    unsigned int seed;
    SYSTIME uptime;
    seed = 0x30d02149;
    int i;
    for (i = 0; i < 0x80; ++i)
        seed ^=  *((unsigned int *)(__PROCESS + i));

    get_uptime(&uptime);
    seed ^= uptime.usec;
    return rand(&seed);
}

unsigned int rand(unsigned int* seed)
{
    SYSTIME uptime;
    get_uptime(&uptime);
    (*seed) = (*seed) * 0x1b8365e9 + 0x6071d;
    (*seed) ^= uptime.usec;
    return (*seed);
}
