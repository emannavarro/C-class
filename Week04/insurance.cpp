/**
    CS-11 Asn 4
    insurance.cpp
    Purpose: insurance calculator

    @author Emanuel Navarro
    @version 1.1 9/22/18
*/


#include <iostream>
using namespace std;

int main() {
    cout << "Enter marital status (s=single, m=married): ";
    string maritalStatus;
    cin >> maritalStatus;
    cout << "Enter your age in years: ";
    int age;
    cin >> age;
    // Enter your code here
    int premium = 0;
    if (maritalStatus == "m") {
        if (age < 21) {
            premium = 1200;
        } else if (age <= 29 && age>=21) {
            premium = 1000;
        } else   {
            premium = 800;
        }
    } else {
        if (maritalStatus == "s") {
            if (age < 21) {
                premium = 1500;
            } else if (age <= 29 && age>=21) {
                premium = 1200;
            } else   {
                premium = 1000;

            }
        }
    }
    cout<< "Premium is "<<premium<<  endl;

    return 0;
}
