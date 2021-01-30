/*********************
Name: Logan Ingram
Coding 02
Purpose: A Simple C++ Program that uses command line parameters.
**********************/
#include "main.h"


int main(int argc, char** argv)
{
    cout << "My Command Line Analyzer!" << endl;
    cout << "The number of command line parameters are: " << argc << endl;
    cout << "The length of the name of the program is: " << string_length(argv[0]) << endl;
    int count = 0;
    while(count != argc)
    {
        cout << "The length of parameter " << count << " is " << string_length(argv[count]) << endl;
        count++;
    }



    return 0;
}
