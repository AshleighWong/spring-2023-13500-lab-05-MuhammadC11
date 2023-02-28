#include <iostream>

#include "funcs.h"

int main()
{
  std::cout << "------------Divisibility-----------" << std::endl;
  std::cout << isDivisibleBy(100, 25) << std::endl;
  std::cout << "------------Prime-----------" << std::endl;
  std::cout << isPrime(11) << std::endl;
  std::cout << "------------Next Prime-----------" << std::endl;
  std::cout << nextPrime(17) << std::endl;
  std::cout << "------------Count Primes-----------" << std::endl;
  std::cout << countPrimes(14, 23) << std::endl;
  std::cout << countPrimes(21, 35) << std::endl;
  std::cout << "------------Twin Prime-----------" << std::endl;
  std::cout << isTwinPrime(3) << std::endl;
  std::cout << isTwinPrime(8) << std::endl;
  std::cout << "------------Next Twin Prime-----------" << std::endl;
  std::cout << nextTwinPrime(55) << std::endl;
  std::cout << "------------Largest Twin Prime-----------" << std::endl;
  std::cout << largestTwinPrime(1, 30) << std::endl;
  return 0;
}
