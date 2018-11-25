/**
    CS-11 Asn 6, findword.cpp
    Purpose: findword.

    @author Emanuel Navarro
    @version 1.0 10/4/18
*/

#include <iostream>
using namespace std;

int main() {
    string word;
    int count = 0;
    while (cin >> word) {
        count++;
        if (word == "Shazam") {
            cout << "Shazam is word " << count << endl;
        } else if (word=="bogus") {
            cout<<"Bogus is word "<< count<< endl;
        }
    }
    return 0;
}
