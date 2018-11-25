/**
    CS-11 Asn 2, workmath.cpp
    Purpose: Improve math and variable skills.

    @author Emanuel Navarro
    @version 1.0 Date Completed
	personal note I added extra parenthis to 4ac and to the pow function and the denominator
*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // Do NOT change the next few lines
    // Read 3 numbers from stdin and print their values to stdout.
    cout << "***Math Worksheet***\n";
    double a, b, c, x;
    cout << "Enter three numbers separated by spaces, and press the Enter key";
    cout << "\nFor example: 1 4 2[Enter]: ";
    cin >> a >> b >> c;
    cout << "\nYou entered: a = " << a << ", b = " << b << ", c = " << c
         << "\n\n";
    // Make changes after this line

    x =  a + b + c; // change this line for expression 1
    cout << "Expression1 (7): " << x << endl; // do not change line

    x=  (a-32)* 5 / 9 ; // change line for expression 2
    cout <<"Expression2 (-17.2222): " << x << endl; // do not change line

    x = (a - b) * (a - b); // change line for expression 3
    cout <<"Expression3 (9): " << x << endl; // do not change line

    x = a * ( 1 - pow(b,c)) / (1 - b); // change line for expression 4
    cout <<"Expression4 (5): " << x << endl; // do not change line

    x = (-b + sqrt((pow(b,2)) - (4*a*c))) / (2 * a) ; // change for expression 5
    cout <<"Expression5 (-0.585786): " << x << endl; // do not change line

    return 0;
}