#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Testing isDivisibleBy")
{
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(100, 24) == false);
    CHECK(isDivisibleBy(100, 100) == true);
    CHECK(isDivisibleBy(100, 1) == true);
    CHECK(isDivisibleBy(100, 0) == false);
}
