#include <cmath>
#include <iostream>
using namespace std;

int main() {
    cout << " Enter the size of the lawn (width x height) in feet" << endl;
    double a=0, b=0;
    cin >> a >> b;
    cout << " To cut a lawn " << a << " by " << b << " will take " << int ((a * b) / 1250) << " hours." << endl;
    int c = (a * b) / 1250;
    double Hourlyrate = c * 25.0;
    double Subtotal= Hourlyrate + 12.75;
    double discount=Subtotal * 0.1;
    double tax= (Subtotal - discount) *0.153;
    cout << "Estimate:" << endl;
    cout << "=========" << endl;
    cout <<"Cutting (" << c << "H)" << "    " << "$" << Hourlyrate << endl;
    cout <<"Travel Cost" << "     " <<"$"<< "12.75" << endl;
    cout <<"                --------"<< endl;
    cout <<"Subtotal" << "         " <<"$" << Subtotal << endl;
    cout <<"Discount (10%)" << "  " <<"- "<<"$"<< discount<< endl;
    cout <<"Tax (15.3%)"<< "     " <<"+ "<< "$"<< tax << endl;
    cout <<"                ========"<< endl;
    cout << "Total Owing:    " <<"$"<< Subtotal - discount +tax<< endl;

    return 0;

}