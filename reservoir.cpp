#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"

double get_east_storage(std::string fetch)
{
            std::ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()) {

        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    //Declare your variables, use proper data type    
    std::string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    //fin >> will score data within your variables
    //order them due to its respected data tyoe
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 

        // this loop reads the file line-by-line

        // extracting 5 values on each iteration 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
        //ignorring the remaining columns 
        // for example, to print the date and East basin storage:
        
        if (fetch == date)
        {
            return eastSt;
        }
        // std::cout << date << " " << eastSt << std::endl;
    }

}

double get_min_east()
{
              std::ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()) {

        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    //Declare your variables, use proper data type    
    std::string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    double min;
    min = 100;
    //fin >> will score data within your variables
    //order them due to its respected data tyoe
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 

        // this loop reads the file line-by-line

        // extracting 5 values on each iteration 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
        //ignorring the remaining columns 
        // for example, to print the date and East basin storage:
        
        if (min > eastSt)
        {
          min = eastSt;
          // std::cout << min << std::endl;
        }
        // std::cout << date << " " << eastSt << std::endl;
    }
  return min;
}

double get_max_east()
{
                std::ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()) {

        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    //Declare your variables, use proper data type    
    std::string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    double max;
    max = 5;
    //fin >> will score data within your variables
    //order them due to its respected data tyoe
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 

        // this loop reads the file line-by-line

        // extracting 5 values on each iteration 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
        //ignorring the remaining columns 
        // for example, to print the date and East basin storage:
        
        if (max < eastSt)
        {
          max = eastSt;
        }
        // std::cout << date << " " << eastSt << std::endl;
    }
  return max;
}

std::string compare_basins(std::string fetch)
{
              std::ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()) {

        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    //Declare your variables, use proper data type    
    std::string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    double east;
    double west;
    //fin >> will score data within your variables
    //order them due to its respected data tyoe
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 

        // this loop reads the file line-by-line

        // extracting 5 values on each iteration 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
        //ignorring the remaining columns 
        // for example, to print the date and East basin storage:
      if (fetch == date)
    {
      east = eastSt;
      west = westSt;
      if (east > west){
        return "East";
      }if (west > east){
        return "West";
      }if (west == east){
        return "Equal";
      }
      }

    }
        // std::cout << date << " " << eastSt << std::endl;
    }





// int main()
// {
//     std::cout << get_east_storage("01/10/2018") << std::endl;
//     std::cout << get_min_east() << std::endl;
//     std::cout << get_max_east() << std::endl;
//     std::cout << compare_basins("01/10/2018") << std::endl;
// }