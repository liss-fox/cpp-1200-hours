#include <iostream>

int add(int x, int y); // needed so main.cpp knows that add() is a function defined elsewhere

int main()
{
    std::cout << "The sum of 5 and 4 is: " << add(5, 4) << '\n';
    return 0;
}