/**
    CS-11 Asn 7, sub.cpp
    Purpose: subs numbers

    @author Emanuel Navarro
    @version 10/15/18
*/
#include <iostream>
using namespace std;

// this function finds the diffrence between two ints
int sub( int a, int b)
{
    int sum = a - b;
    return sum;
}

int main()
{


    cout << "Enter two numbers to subtract: ";
    int num1, num2;
    cin >> num1 >> num2;
    int diff = sub(num1, num2);
    cout << "Difference=" << diff << endl;

    return 0;
}