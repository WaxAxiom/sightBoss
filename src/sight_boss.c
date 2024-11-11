#include "../include/listener.h"

int main(int argc, char *argv[])
{
    int mapSize = 2;

    boardState_t* boardState = initMap(mapSize);

    free(boardState);

    printf("The build finally worked.\n");
    return 0;
}