#include "unity_fixture.h"

static void runAllTests(void)
{
    RUN_TEST_GROUP(Example);
    RUN_TEST_GROUP(MyCode);
}

int main(int argc, const char* argv[])
{
    UnityMain(argc, argv, runAllTests);
}