/*********************
Name: Logan Ingram
Coding 02
Purpose: A Simple C++ Program that uses command line parameters.
**********************/
#include "main.h"


int main(int argc, char** argv)
{
    cout << "My Command line analyzer..." << endl;
    cout << "The number of command line parameters are: " << argc << endl;
    cout << "The length of the name of the program is: " << string_length(argv[0]) << endl;
    for(int i = 1; i < argc; i++)
    {
        cout << "The length of parameter " << i << " is " << string_length(argv[i]) << endl;
    }



    return 0;
}
