/**
    CS-11 Asn 6, test.cpp
    Purpose:test

    @author Emanuel Navarro
    @version 1.0 10/4/18
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a word: ";
    string msg;
    cin >> msg;
    for (unsigned int i = 0; i < msg.length(); i++) {
        cout << i << ": " << msg[i] << endl;
    }
    return 0;
}