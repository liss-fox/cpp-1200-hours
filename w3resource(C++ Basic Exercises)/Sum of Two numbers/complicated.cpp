
#include <iostream>

int main () {

    int first_num;
    int second_num;

    std::cout << "Welcome. Please enter the first number: " << '\n' ;
    while (!(std::cin >> first_num))
    {
        std::cout << "Invalid input. Enter a number: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n'); 
    }
    
    std::cout << "Please enter the second number: " << '\n' ;
    while (!(std::cin >> second_num))
    {
        std::cout << "Invalid input. Enter a number: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n'); 
    }

    std::cout << "Sum of two numbers is : "<< first_num + second_num << '\n' ;

    return 0;
}