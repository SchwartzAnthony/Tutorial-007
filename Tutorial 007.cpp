// Tutorial 007.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Scope Value & Local Variables 

void doIt(int x)
{
    int y{ 4 };
    std::cout << "doIt: x = " << x << " y = " << y << "\n";

    x = 3; 
    std::cout << "doIt: x = " << x << " y = " << y << "\n";
}

int main()
{
    int x{ 1 };
    int y{ 2 }; 

    std::cout << "main: x = " << x << " y = " << y << "\n"; 

    doIt(x);

    std::cout << "main: x = " << x << " y = " << y << "\n"; 

    return 0; 
}  