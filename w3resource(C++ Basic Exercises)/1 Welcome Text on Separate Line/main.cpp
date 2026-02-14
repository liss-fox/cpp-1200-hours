// 2 types of comments - thats the first one

/* 
Thats the second one
*/

/*
    Write a program in C++ to print welcome text on a separate line.
*/

#include <iostream>

int main () {
    
    std::string welcome_phrase = "Welcome to this program";

    std::cout << welcome_phrase << std::endl; 

    /*
        also i can do this:
    */

    std::cout << welcome_phrase ;

    return 0;
}


/*
    In C++, std is the name of the standard namespace.

    Three main ways to access names from std:

    1. Qualified name (recommended in most professional code)

    std::string greeting = "Hello";

    2. Using directive

    using namespace std;    // brings everything from std into global scope

    int main() {
        string name = "Alice";
        cout << name << endl;
        vector<int> v = {10, 20, 30};
    }

    3. Using declaration (more selective – brings only specific names)

    using std::string;
    using std::cout;
    using std::endl;

    string message = "Welcome";
    cout << message << endl;

*/