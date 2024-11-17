#include "../include/listener.h"
#include "../include/scenario.h"

int main(int argc, char *argv[])
{
    // int mapSize = 2;

    // boardState_t* boardState = initMap(mapSize);

    // free(boardState);

    char map[GRID_SIZE_TURN][GRID_SIZE_TURN];

    getMapTurn(Alpha, map);

    printf("   A B C D E F G H I J\n");
    for(int i = 0; i < GRID_SIZE_TURN; i++)
    {
        printf("%d  ", i);
        for(int j = 0; j < GRID_SIZE_TURN; j++)
        {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}