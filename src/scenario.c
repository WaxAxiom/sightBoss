#include <stdio.h>
#include <string.h>

#include "../include/scenario.h"

const char* GridColNames[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

void getMapTurn(enum MapName Name, char Map[GRID_SIZE_TURN][GRID_SIZE_TURN])
{
    char* islands;
    switch (Name)
    {
    case Alpha:
        islands = "1F,2B,3I,4D,5B,6I,7D,7F";
        break;
    case Bravo:
        islands = "1I,2B,3G,4E,6G,7C";
        break;
    case Charlie:
        islands = "2D,2E,2F,6B,7G,8G,8H";
        break;
    default:
        break;
    }

    char currPos[3];
    char* result;
    for(int i = 0; i < GRID_SIZE_TURN; i++)
    {
        for (int j = 0; j < GRID_SIZE_TURN; j++)
        {
            snprintf(currPos, 3, "%d%c", i, *GridColNames[j]);
            result = strstr(islands, currPos);

            if (result == NULL)
            {
                Map[i][j] = 'X';
            }
            else
            {
                Map[i][j] = 'O';
            }
        }
    }
}

void getMapRealTime(enum MapName Name, char Map[GRID_SIZE_REALTIME][GRID_SIZE_REALTIME])
{
    char* islands;
    switch (Name)
    {
    case Alpha:
        islands = "1F,2B,3I,4D,5B,6I,7D,7F";
        break;
    case Bravo:
        islands = "1I,2B,3G,4E,6G,7C";
        break;
    case Charlie:
        islands = "2D,2E,2F,6B,7G,8G,8H";
        break;
    default:
        break;
    }

    char currPos[3];
    char* result;
    for(int i = 0; i < GRID_SIZE_REALTIME; i++)
    {
        for (int j = 0; j < GRID_SIZE_REALTIME; j++)
        {
            snprintf(currPos, 3, "%d%c", i, *GridColNames[j]);
            result = strstr(islands, currPos);

            if (result == NULL)
            {
                Map[i][j] = 'X';
            }
            else
            {
                Map[i][j] = 'O';
            }
        }
    }
}