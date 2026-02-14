#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>


int main () {

    int random_number;
    int guess = 0;
    int try_counter = 0;

    std::srand(static_cast<unsigned>(std::time(nullptr)));
    random_number = rand() % 10 + 1;  

    std::cout << "Welcome!" << '\n' ;

    while (guess != random_number) {
        std::cout << "Pls enter a number from 1 to 10 : " << '\n' ;

        while (!(std::cin >> guess)) {
            std::cout << "Invalid input. Try again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        try_counter += 1;

        if (random_number > guess)
        {   
            std::cout << "You are wrong! My number is bigger!" << '\n' ;
            std::cout << "Try one more time" << '\n' ;
        }
        else if (random_number < guess)
        {
            std::cout << "You are wrong! My number is smaller!" << '\n' ;
            std::cout << "Try one more time" << '\n' ;
        }
    }

    std::cout << "Random number is: " << random_number << '\n';
    std::cout << "Number of your attempts: " << try_counter << '\n';

    std::cout << "You won! Congratulations" << '\n' ;
    

    return 0;
}