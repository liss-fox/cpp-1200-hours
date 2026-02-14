#include <iostream>
#include <cstdlib>
#include <ctime>


int main () {

    int random_number;
    int guess;

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    random_number = rand() % 10 + 1;  

    std::cout << "Welcome! Pls enter a number from 1 to 10 : " << '\n' ;
    std::cin >> guess; 

    if (random_number != guess)
    {   
        std::cout << "Random number is: " << random_number << '\n';
        std::cout << "You lose!" << '\n' ;
    }
    else if (random_number == guess)
    {
        std::cout << "Random number is: " << random_number << '\n';
        std::cout << "You won! Congratulations" << '\n' ;
    }
    else
    {
        std::cout << "Error." << '\n' ;
    }

    return 0;
}