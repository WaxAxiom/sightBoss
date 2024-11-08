#include "../include/Listener.h"

void listen(char* words, int length)
{
    char spoken[12] = "Listening...";
    for(int i = 0; i < length; i++)
    {
        words[i] = spoken[i];
    }
}