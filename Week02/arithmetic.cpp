#include <iostream>
#include <cmath> // math function library
using namespace std;

int main() {
    int a = 5, b = 2;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a + b / 2 = " << a + b / 2 << endl;
    cout << "(a + b) / 2 = " << (a + b) / 2 << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a / b % b = " << a / b % b << endl;
    cout << "a / (b * b) = " << a / (b * b) << endl;
    cout << "sqrt(a + b) = " << sqrt(a + b) << endl;

    /* What is wrong with the following code?
    cout << "a + b = a + b" << endl;
    The code should be written like as follows instead cout << "a + b = " << a + b << endl;

    */


    return 0;


}