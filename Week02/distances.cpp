#include <cmath>
#include <iostream>
using namespace std;

int main () {
    int inches =0;
    cout << "Enter number of inches:";
    cin >> inches;
    int miles = inches / 63360;
    int remainderm = inches % 63360;
    int yard= remainderm / 36;
    int remainder = inches % 36;
    int feet = remainder /12;
    int inches1 = inches % 12;
    cout << "In whole numbers: " << miles <<" miles " << yard << " yard "<< feet << " feet " << inches1 << " inches "<< endl;

    return 0;
}

