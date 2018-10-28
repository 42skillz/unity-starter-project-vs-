#include "unity_fixture.h"

TEST_GROUP(MyCode);

TEST_SETUP(MyCode)
{
}

TEST_TEAR_DOWN(MyCode)
{
}

TEST(MyCode, test1)
{
	TEST_IGNORE_MESSAGE("Implement Me");
}

TEST_GROUP_RUNNER(MyCode)
{
	//Each TEST has a corresponding RUN_TEST_CASE
	RUN_TEST_CASE(MyCode, test1);
}