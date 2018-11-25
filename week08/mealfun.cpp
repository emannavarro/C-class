/**
    CS-11 Asn 8, mealfun.cpp
    Purpose: meal functions!

    @author Emanuel Navarro and Rajwan silwal
    @version 10/22/18
*/

#include <iostream>
using namespace std;
#include <iomanip>

/*
gather the price of the meal

*/

double meal_price(double price);


/*
gathers the price of gratuity

*/

double meal_gratuity(double y);


/*

calcualtes and prints out the final cost , tax and gratuity
*/
void print_out(double mealcost, double gratuity);


int main() {
    double price=0, x=0,y=0;
    cout<<"Welcome to the Restaurant Meal Calculator"<< endl;
    x=meal_price(price);  //price of meal

    y=meal_gratuity(x);   //gratuity of meal
    print_out(x,y);


    return 0;
}

double meal_price(double price) {
    double input=0.0;
    do {
        cout<<"Enter the price of your meal: ";
        cin>>price;
        if (cin) {
            input=2;
        } else {
            cout<<"Error: enter numbers only!"<< endl;
            cin.clear();
            cin.ignore(1000, '\n');
            input = -1;
        }

    } while (input <= 0.0);
    double x=price;

    return x;

}

double meal_gratuity(double y) {

    double tip=0, z=0, input=0.0;

    do {
        cout<<"Enter the percent tip (10 min): ";
        cin>>tip;
        if (cin.fail()) {
            cout<<"Error: Enter numbers only!"<< endl;
            cin.clear();
            cin.ignore(1000, '\n');
            input = -1;
        } else if(tip<10.0) {
            cout<< "Error: Tip must be atleast 10 percent"<<endl;
            cin.clear();
            cin.ignore(1000, '\n');
            input= -1;

        } else {
            input=2;
        }
    } while (input <= 0.0);

    z= y*(tip/100);




    return z;
}

void print_out(double mealcost, double gratuity) {
    const double tax=0.0925, meal_tax=mealcost*tax, total_cost=mealcost+(mealcost*tax)+gratuity;
    cout<<endl;

    cout<<"Food cost:     "<<setw(8) <<mealcost<< setprecision(4)<< endl;
    cout<<"Sales Tax:     "<<setw(8) <<meal_tax <<setprecision(4)<< endl;
    cout<<"Gratuity:      "<<setw(8) <<gratuity<<setprecision(4)<< endl;
    cout<<"Total cost:    "<<setw(8) <<total_cost<<setprecision(4)<< endl;
    cout<<"Goodbye.";
}