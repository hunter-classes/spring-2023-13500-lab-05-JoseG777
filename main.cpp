#include <iostream>


#include "funcs.h"

int main()
{
  std::cout<<isDivisble(99,25)<<"\n";
  std::cout<<isPrime(-10)<<"\n";
  std::cout<<nextPrime(8)<<"\n";
  std::cout<<countPrimes(1, 1000)<<"\n";
  std::cout<<isTwinPrime(12)<<"\n";
  std::cout<<nextTwinPrime(23)<<"\n";
  std::cout<<largestTwinPrime(1, 31)<<"\n";

  std::cout<<countPrimes(1, 1000)<<"\n";
  std::cout<<countPrimes(-11, 10)<<"\n";

  return 0;
}
