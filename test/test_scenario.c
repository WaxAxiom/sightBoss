#include "unity.h"
#include "../include/scenario.h"

void setUp()
{

}

void tearDown()
{

}

void test_getMapTurnAlpha()
{
    char map[GRID_SIZE_TURN][GRID_SIZE_TURN];
    getMapTurn(Alpha, map);

    char expected[GRID_SIZE_TURN][GRID_SIZE_TURN] = 
    {
        /*
         'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'
        */
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'O', 'X', 'X', 'X', 'X'},
        {'X', 'O', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'O', 'X'},
        {'X', 'X', 'X', 'O', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'O', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'O', 'X'},
        {'X', 'X', 'X', 'O', 'X', 'O', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    };

    TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, map, 100);
}

void test_getMapTurnBravo()
{
    char map[GRID_SIZE_TURN][GRID_SIZE_TURN];
    getMapTurn(Bravo, map);

    char expected[GRID_SIZE_TURN][GRID_SIZE_TURN] = 
    {
        /*
         'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'
        */
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'O', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'O', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'O', 'X', 'X', 'X'},
        {'X', 'X', 'O', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    };

    TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, map, 100);
}

void test_getMapTurnCharlie()
{
    char map[GRID_SIZE_TURN][GRID_SIZE_TURN];
    getMapTurn(Charlie, map);

    char expected[GRID_SIZE_TURN][GRID_SIZE_TURN] = 
    {
        /*
         'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'
        */
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'O', 'O', 'O', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'O', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'O', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'O', 'O', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    };

    TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, map, 100);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_getMapTurnAlpha);
    RUN_TEST(test_getMapTurnBravo);
    RUN_TEST(test_getMapTurnCharlie);

    return UNITY_END();
}