#include <iostream>

#include "funcs.h"

int main()
{
  std::cout << isDivisibleBy(100, 25) << std::endl;
  std::cout << isDivisibleBy(100, 24) << std::endl;
  std::cout << isDivisibleBy(100, 100) << std::endl;
  std::cout << isDivisibleBy(100, 1) << std::endl;
  std::cout << isDivisibleBy(100, 0) << std::endl;
  return 0;
}
