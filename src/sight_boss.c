#include <stdio.h>
#include "../include/listener.h"

int main(int argc, char *argv[])
{
    int mapSize = 2;

    printf("Calling initMap\n");

    boardState_t* boardState = initMap(mapSize);

    printf("Board size: %d\n", boardState->mapSize);

    for(int i = 0; i < boardState->mapSize; i++)
    {
        for (int j = 0; j < boardState->mapSize; j++)
        {
            printf("%c ", boardState->map[i][j]);
        }
        printf("\n");
    }

    printf("The build finally worked.\n");
    return 0;
}