// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int counter = 1;

    /*for (counter = 1; counter < 10; counter = counter + 2)
    {
        std::cout << "Vrijednost: " << counter;
        std::cout << "\n";
    }*/


    while (counter < 10)
    {
        std::cout << "Vrijednost: " << counter << "\n";
        counter++;


    }

    std::cout << "\n\n";
    std::cout << "STOP";

}
