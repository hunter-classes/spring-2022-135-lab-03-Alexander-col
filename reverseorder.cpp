#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"
void reverse_order(std::string date1, std::string date2)
{
  std::istream fin("Current_Reservoir_Levels.tsv");
  double data [365];
  std::stringdates[365];
  int count = 0;
  bool c = false;
  if (fin.fail())
  {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }
  else{
    std::string junk, date;
    getline(fin, junk);
    double eastSt;
    double eastEl; 
    double westSt;
    double westEl;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
      {
        fin.ignore(INT_MAX, '\n');\
        if (date == date1)
        {
          c = true;
          if (c)
          {
            date[counter] = westEl;
            dates[counter] = date;
            counter = counter + 1;
            }
          if (date == date2)
          {
            c = false;
          }
          fin.close();
          for (int i = counter - 1; i > -1, i--){
            std::cout << dates[i] << " " << data[i] << " ft" << std::endl;
            }
          }
        }
      }
}