#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Divisibility")
{
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(0, 1) == true);
    CHECK(isDivisibleBy(1, 0) == false);
}

TEST_CASE("Prime")
{
    CHECK(isPrime(11) == true);
    CHECK(isPrime(12) == false);
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(3) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(5) == true);
    CHECK(isPrime(6) == false);
}

TEST_CASE("Next Prime")
{
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(1) == 2);
    CHECK(nextPrime(2) == 3);
    CHECK(nextPrime(3) == 5);
    CHECK(nextPrime(4) == 5);
    CHECK(nextPrime(5) == 7);
    CHECK(nextPrime(6) == 7);
    CHECK(nextPrime(7) == 11);
}

TEST_CASE("Count Primes")
{
    CHECK(countPrimes(14, 23) == 3);
    CHECK(countPrimes(0, 1) == 0);
    CHECK(countPrimes(1, 0) == 0);
    CHECK(countPrimes(0, 0) == 0);
    CHECK(countPrimes(1, 1) == 0);
    CHECK(countPrimes(2, 2) == 1);
    CHECK(countPrimes(21, 28) == 1);
    CHECK(countPrimes(21, 35) == 3);
}
TEST_CASE("Is Twin Prime")
{
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(8) == false);
    CHECK(isTwinPrime(0) == false);
    CHECK(isTwinPrime(4) == false);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(6) == false);
    CHECK(isTwinPrime(7) == true);
    CHECK(isTwinPrime(9) == false);
    CHECK(isTwinPrime(10) == false);
    CHECK(isTwinPrime(11) == true);
    CHECK(isTwinPrime(16) == false);
    CHECK(isTwinPrime(17) == true);
}

TEST_CASE("Next Twin Prime")
{
    CHECK(nextTwinPrime(55) == 59);
    CHECK(nextTwinPrime(0) == 3);
    CHECK(nextTwinPrime(1) == 3);
    CHECK(nextTwinPrime(2) == 3);
    CHECK(nextTwinPrime(3) == 5);
    CHECK(nextTwinPrime(4) == 5);
    CHECK(nextTwinPrime(5) == 7);
    CHECK(nextTwinPrime(6) == 7);
    CHECK(nextTwinPrime(7) == 11);
    CHECK(nextTwinPrime(8) == 11);
    CHECK(nextTwinPrime(9) == 11);
    CHECK(nextTwinPrime(10) == 11);
    CHECK(nextTwinPrime(11) == 13);
    CHECK(nextTwinPrime(16) == 17);
    CHECK(nextTwinPrime(17) == 19);
}
TEST_CASE("Largest Twin Prime")
{
    CHECK(largestTwinPrime(1, 30) == 29);
    CHECK(largestTwinPrime(21, 35) == 31);
    CHECK(largestTwinPrime(0, 1) == -1);
}