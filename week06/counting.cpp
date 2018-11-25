/**
    CS-11 Asn 5, loopwork.cpp
    Purpose: counting

    @author Emanuel Navarro
    @version 10/10/18
 */

#include <iostream>
using namespace std;

int main() {
    // Enter your code here
    int max = 0;
    cout << "This program writes lists of numbers.\n";
    cout << "Enter the maximum number: ";
    cin >> max;
    cout << "for loop:\n";
    for (int i = 0; i < max; i++) {
        cout << i << endl;
    }
    return 0;
}