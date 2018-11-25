/**
    CS-11 Asn 9, coffee.cpp
    Purpose: in class assignment

    @author Emanuel Navarro
    @version 10/28/18
*/

#include <iostream>
using namespace std;

void fillCup(double& cup, string& sweetener) {
    cup = 10;
    sweetener = "sugar";
    cout << "Coffee amount: " << cup << " oz.\n";
    cout << "Sweetener: " << sweetener << endl;
}

int main() {

    double cup = 0;
    string sweetener = "none";
    fillCup(cup, sweetener);
    if (cup == 0) {
        cout << "Where's my coffee?\n";
    } else {
        cout << cup << "oz. coffee and " << sweetener << " too!\n";
        cout << "Time to shine!\n";
    }

    return 0;
}