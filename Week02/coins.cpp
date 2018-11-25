#include <iostream>
using namespace std;

int main() {
    int pennies = 8;
    int nickels = 5;
    int dimes = 4;
    int quarters = 3;

    double total = pennies * 0.01 + nickels * .05
                   + dimes * 0.10 + quarters * 0.25;

    cout << "Total value = " << total << "\n";

    return 0;
}