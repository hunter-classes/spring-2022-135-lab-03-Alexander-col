// add your co#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>



float get_east_storage(std::string fetch)
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
        std::cout << date << " " << eastSt << std::endl;
    }

}


int main()
{
    std::cout << get_east_storage("01/10/2018") << std::endl;
}