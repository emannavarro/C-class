#include <iostream>
using namespace std;

int main() {
    // Enter your code here
    int num1 = 0;
    cout << "Enter the first number: ";
    cin >> num1;
    double num2 = 0.0;
    cout << "Enter the second number: ";
    cin >> num2;
    double total = num1 + num2;
    cout << "The sum of " << num1 << " and "
         << num2 << " is " << total <<  endl;
    return 0;
}