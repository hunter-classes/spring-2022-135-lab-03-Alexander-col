#include <iostream>
#include "reservoir.h"
// #include "reverseorder.h" was unable to figure out and kept on running into issues

int main()
{
  std::cout << "The East basin storage for 01/10/2018 was: " <<get_east_storage("01/10/2018") << std::endl;
  std::cout << "The minimum ever held in the East basin storage was " <<get_min_east() << std::endl;
  std::cout << "The maximum ever held in the East basin storage was " << get_max_east() << std::endl;
  std::cout << "On 01/10/2018 out of the East and West the basin that held more was " << compare_basins("01/10/2018") << std::endl;
  // reverse_order("01/10/2018", "01/20/2018");
  return 0;
}