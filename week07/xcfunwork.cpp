/**
    CS-11 Asn xcfunwork, xcfunwork
    Purpose: pair programing extra credit

    @author Emanuel Navarro and Rajan silwal
    @version 10/15/18
*/

#include <iostream>
using namespace std;
/**
Calculates the price  by dividing the volume by the price

*/
double calculate_cost( double size, double price  );

/**
Gathers price and volume of limestone

*/

int gather_data(double& price, double& size)
{
    cout<< "Welcome Limestone R US" <<endl;
    cout<<"Enter the volume(lbs) Limestone and pound per dollar(lbs/dollar): ";
    cin>>price>>size;

    return 0;


}

int main()
{


    double price = 0, size = 0;
    gather_data(price, size);
    cout << price <<"lbs of limestone" << " at the cost of "<<' ' << size<< "$";
    cout<<" comes out to the estimated value of " <<calculate_cost(price, size)<< " dollars";

    return 0;
}

double calculate_cost( double size, double price  )
{

    double costperarea= size/price;


    return costperarea;

}

