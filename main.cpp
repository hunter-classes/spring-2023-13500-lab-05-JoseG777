#include <iostream>


#include "funcs.h"

int main()
{
  std::cout<<isDivisble(99,25)<<"\n";

  std::cout<<isPrime(-10)<<"\n";

  std::cout<<nextPrime(8)<<"\n";

  std::cout<<isTwinPrime(12)<<"\n";

  std::cout<<nextTwinPrime(1002)<<"\n";

  std::cout<<largestTwinPrime(1, 31)<<"\n";
  std::cout<<largestTwinPrime(1, 10000)<<"\n";
  std::cout<<largestTwinPrime(52, 93)<<"\n";
  
  std::cout<<countPrimes(13, 100)<<"\n";


  return 0;
}
