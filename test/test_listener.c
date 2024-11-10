#include "unity.h"
#include "../include/listener.h"

void setUp()
{

}

void tearDown()
{

}

void test_listen()
{
    char output[12] = "";
    listen(output, 12);
    TEST_ASSERT_EQUAL_STRING("Listening...", output);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_listen);

    return UNITY_END();
}