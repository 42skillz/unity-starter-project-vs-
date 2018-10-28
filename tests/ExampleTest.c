
#include "unity_fixture.h"
#include "Example.h"

TEST_GROUP(Example);

TEST_SETUP(Example)
{
}

TEST_TEAR_DOWN(Example)
{
}

TEST(Example, test1)
{
    LONGS_EQUAL(1, example());
}

TEST_GROUP_RUNNER(Example)
{
    //Each TEST has a corresponding RUN_TEST_CASE
    RUN_TEST_CASE(Example, test1);
}
