#include "../include/listener.h"

boardState_t* initMap(int MapSize)
{
    boardState_t* boardState = malloc(sizeof(boardState_t*) + sizeof(*(boardState->map)) * MapSize);
    assert(boardState);

    boardState->mapSize = MapSize;
    
    printf("Malloc'ing map\n");

    for (int i = 0; i < boardState->mapSize; i++)
    {
        boardState->map[i] = malloc(sizeof(*(boardState->map[i]) * sizeof(char)));
        assert(boardState->map[i]);
        for(int j = 0; j < boardState->mapSize; j++)
        {
            boardState->map[i][j] = '0';
        }
    }

    return boardState;
}