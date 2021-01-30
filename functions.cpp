/*********************
Name: Logan Ingram
Coding 02
Purpose: A Simple C++ Program that uses command line parameters.
**********************/

#include "functions.h"

int string_length(const char *str)
{
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    return length;
}
