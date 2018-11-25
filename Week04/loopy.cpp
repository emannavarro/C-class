/**
    CS-11 Asn 4
    loopy.cpp
    Purpose: foodguide

    @author Emanuel Navarro
    @version 1.1 9/22/18
*/

#include <iostream>
using namespace std;


int main() {
    int guess = 0;
    cout << "I'm thinking of a number between"
         << " 1 and 10.\nCan you guess it?\n\n"
         << "Enter your guess: ";
    cin >> guess;

    if (7 == guess) {
        cout << "*** Correct! ***\n";
    } else {
        cout << "Sorry, that is not correct.\n";
        cout << "Try again.\n";
    }
    return 0;
}