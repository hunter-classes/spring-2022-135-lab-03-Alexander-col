// add your code as appropriate 
#include <iostream>
#include "reservoir.h"


int main()
{
  std::cout << get_east_storage("01/10/2018") << std::endl;
  std::cout << get_min_east() << std::endl;
  std::cout << get_max_east() << std::endl;
  std::cout << compare_basins("01/10/2018") << std::endl;

  return 0;
}