#ifndef _LISTENER_H_
#define _LISTENER_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int mapSize;
    char *map[];
} boardState_t;

boardState_t* initMap(int MapSize);

#endif
