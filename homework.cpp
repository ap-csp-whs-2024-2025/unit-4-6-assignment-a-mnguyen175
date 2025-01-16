/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

// Compare
void compare(int x, int y)
{
    if (x < y)
    {
        std::cout << x << " is less than " << y << std::endl;
    }
    else if (x > y)
    {
        std::cout << x << " is greater than " << y << std::endl;
    }
    else 
    {
        std::cout << "The inputs are equal" << std::endl;
    }

// Quadratic Formula
void quadForm()
}
int main()
{
    // Complete your homework here
    compare(5, 3);
    compare (2, 6);
    compare (3, 3);
    
    return 0;
}
