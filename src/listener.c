#include <stdio.h>
#include <stdlib.h>

#include "../include/listener.h"

boardState_t* initMap(int MapSize)
{
    boardState_t* boardState = malloc(sizeof(char) + MapSize * sizeof(char*));
    if (!boardState)
    {
        perror("malloc initMap");
        exit(EXIT_FAILURE);
    }

    boardState->mapSize = MapSize;
    
    for(int i = 0; i < MapSize; i++)
    {
        boardState->map[i] = (char*)malloc(MapSize * sizeof(char));
    }

    for(int i = 0; i < boardState->mapSize; i++)
    {
        for (int j = 0; j < boardState->mapSize; j++)
        {
            boardState->map[i][j] = '0';
        }
    }
}