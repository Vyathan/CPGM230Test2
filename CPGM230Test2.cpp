// Matt Brundage II
// 11/7/21
// CPGM230Test2.cpp
// C++ program that displays course codes with hyphens

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Declare
    string code = "";

    // Request user input
    cout << "Please enter a 7 character course code (4 alpha, 3 numeric): ";
    getline(cin, code);

    // Validate string
    if (code.length() == 7)
    {
        // Insert hyphen
        code.insert(4, "-"); //xxxx-xxx
        // Display result
        cout << "The correct course code is: " << code << endl;
    }
    else
        cout << "The course code must contain 7 characters (4 alpha, 3 numeric): " << endl;
    // End if
    return 0;
} // End of main function