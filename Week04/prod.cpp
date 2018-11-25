/**
    CS-11 Asn 4
    prod.cpp
    Purpose: calculating product price

    @author Emanuel Navarro
    @version 1.1 9/22/18
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string name;
    double price = 0;

    cout<< "Enter the product name: ";
    cin>>name;
    cout<< "Price of the "<< name<< ": ";
    cin>> price;

    cout << fixed             // fixed notation, not scientific
         << setprecision(2);  // show 2 decimal places
    const int PERCENT = 100;
    double taxRate = 0;
    cout << "Enter sales tax rate (%): ";
    cin >> taxRate;
    double tax = price * taxRate / PERCENT;
    price += tax;
    cout<< "Total price: $" << price << endl;
    int dollars = (int) price;
    cout << "In whole dollars: $" << dollars << endl;

    return 0;

}
