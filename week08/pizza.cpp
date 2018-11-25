/**
    CS-11 Asn 8, pizza.cpp
    Purpose: pizza

    @author Emanuel Navarro, Rajwan, Abby, James Arnold
    @version 10/22/18
*/

#include <iostream>
using namespace std;
/**
Calculates the the area divided by the price

*/
double calculate_cost( double size, double price  );

/**
Gathers price and size of pizza

*/

int gather_data(double& price, double& size) {
    cout<< "Welcome to Cabrillo Pizzeria!" <<endl;
    cout<<"Enter diameter of pizza and price of pizza: ";
    cin>>price>>size;

    return 0;


}





int main() {


    double price = 0, size = 0;
    gather_data(price, size);
    cout << price << ' ' << size;
    cout<<"The cost per in "<<calculate_cost(price, size);





    return 0;
}

double calculate_cost( double size, double price  ) {

    double radius=size/2;
    double area=radius*radius*3.14;
    double costperarea= area/price;


    return costperarea;

}

