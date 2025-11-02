#include <iostream>


int userInput(){
    std::cout << "Enter your number: ";
    int userNumber{};
    std::cin >> userNumber;
    return userNumber;
}

int doubleNumber(int userNumber){
    return userNumber*2;
}

void printNumber(int numberToPrint, int userNumber){
    std::cout << "Double of " << userNumber << " is " <<numberToPrint;
}

int main() {

    int userInputNumber {userInput()};
    int doubledNumber {doubleNumber(userInputNumber)};
    printNumber(doubledNumber, userInputNumber);
    
    return 0;
}