/**
    CS-11 Asn 4
    foodguide.cpp
    Purpose: foodguide

    @author Emanuel Navarro
    @version 1.1 9/22/18
*/


#include <iostream>
using namespace std;

int main() {
    cout << "Enter the temperture in degrees fahrenheit: ";
    int temp = 0;
    cin >> temp;
    cout << "Are you hungry? (y/n): ";
    char answer = 'n';
    cin >> answer;
    // Enter your code here
    bool hungry = (answer == 'y');
    if (hungry && temp >=100) {
        cout<< "Eat ice cream\n";
    } else if (hungry && temp <= 0) {
        cout<< "Eat spicy food\n";
    } else if (!hungry) {
        cout<< "Do not eat anything\n";
    } else {
        cout<<  "Eat favorite food\n";

    }

    return 0;
}
