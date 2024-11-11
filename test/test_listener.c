#include "unity.h"
#include "../include/listener.h"

void setUp()
{

}

void tearDown()
{

}

void test_initMap_size2()
{
    const int mapSize = 2;
    boardState_t* boardState = initMap(mapSize);
    TEST_ASSERT_EQUAL(mapSize, boardState->mapSize);

    char expected[mapSize];
    for(int i = 0; i < mapSize; i++)
    {
        expected[i] = '0';
    }

    for(int i = 0; i < mapSize; i++)
    {
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, boardState->map[i], mapSize);
    }
}

void test_initMap_size4()
{
    const int mapSize = 4;
    boardState_t* boardState = initMap(mapSize);
    TEST_ASSERT_EQUAL(mapSize, boardState->mapSize);

    char expected[mapSize];
    for(int i = 0; i < mapSize; i++)
    {
        expected[i] = '0';
    }
    
    for(int i = 0; i < mapSize; i++)
    {
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, boardState->map[i], mapSize);
    }
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_initMap_size2);
    RUN_TEST(test_initMap_size4);

    return UNITY_END();
}