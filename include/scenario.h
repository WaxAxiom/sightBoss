#ifndef _SCENARIO_H
#define _SCENARIO_H

#define GRID_SIZE_TURN 10
#define GRID_SIZE_REALTIME 15

enum MapName
{
    Alpha,
    Bravo,
    Charlie,
    Delta,
    Echo
};

enum GridCol
{
    A,B,C,D,E,F,G,H,I,J
};

extern const char* GridColNames[];

void getMapTurn(enum MapName, char Map[GRID_SIZE_TURN][GRID_SIZE_TURN]);
void getMapRealTime(enum MapName, char Map[GRID_SIZE_REALTIME][GRID_SIZE_REALTIME]);

#endif