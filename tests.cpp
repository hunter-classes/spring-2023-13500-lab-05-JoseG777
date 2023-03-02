#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("CHECKING isDivisble"){
    CHECK(isDivisble(99, 25) == false);
    CHECK(isDivisble(-100, 25) == true);
    CHECK(isDivisble(10, 5) == true);
    CHECK(isDivisble(-9, 5) == false);

}

TEST_CASE("CHECKING isPrime"){
    CHECK(isPrime(10) == false);
    CHECK(isPrime(11) == true);
    CHECK(isPrime(13) == true);
    CHECK(isPrime(4) == false);

}

TEST_CASE("CHECKING nextPrime"){
    CHECK(nextPrime(8) == 11);
    CHECK(nextPrime(11) == 13);
    CHECK(nextPrime(13) == 17);
    CHECK(nextPrime(4) == 5);

}

TEST_CASE("CHECKING countPrimes"){
    CHECK(countPrimes(8, 11) == 1);
    CHECK(countPrimes(11, 29) == 6);
    CHECK(countPrimes(13, 100) == 20);
    CHECK(countPrimes(4, 10) == 2);

}

TEST_CASE("CHECKING isTwinPrime"){
    CHECK(isTwinPrime(11) == true);
    CHECK(isTwinPrime(29) == true);
    CHECK(isTwinPrime(100) == false);
    CHECK(isTwinPrime(9) == false);

}
