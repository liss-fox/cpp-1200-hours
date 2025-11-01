#include <iostream>

int main() {
    int userNumber{};
    std::cout << "Enter an integer: ";
    std::cin >> userNumber;
    int numberDoubled{userNumber * 2};
    int numberTripled{userNumber * 3};
    std::cout << "Double "<< userNumber << " is: " << numberDoubled;
    std::cout << "\nTriple "<< userNumber << " is: " << numberTripled << "\n";
    return 0;  
}