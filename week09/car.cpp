/**
    CS-11 Asn 9, car
    Purpose: inclass assginment

    @author Emanuel Navarro
    @version 10/28/18
*/

#include <iostream>
using namespace std;
#include <iomanip>





class Car {
public:
    Car();
    Car(string newName, double newPrice);
    Car(string newName, double newPrice, double newMpg);
    void setMpg(double newMPG);
    void read();
    void print() const;

private:
    string name;
    double price;
    double mpg;


};





int main() {


    Car tesla;
    Car volkswagen = Car();
    tesla.read();
    tesla.print();
    volkswagen.read();
    volkswagen.print();
    cout << "Other car comparisons:\n";
    Car corolla("Toyota Corolla", 18500, 30); // 3-param constructor
    corolla.print();
    Car junker("Junker", 350); // 2-param constructor
    junker.setMpg(10);
    junker.print();



    return 0;
}

Car::Car() {
    name = "none";
    price = 0;
    mpg = 0;
}

Car::Car(string newName, double newPrice, double newMpg) {
    name=newName;
    price=newPrice;
    mpg=newMpg;
}
Car::Car(string newName, double newPrice) {
    name=newName;
    price=newPrice;
    mpg=0;
}
void Car::print() const {
    cout << name << " @ " << price << " with mpg "<< mpg<< endl;
}
void Car::read() {
    cout << "Enter the name of the product: ";
    cin >> ws;
    getline(cin, name);
    cout << "Enter price for a " << name << ": ";
    cin >> price;
    cout << "You entered: "<< price<< endl;
    cout<<"What is the mpg for the "<< name<<"?";
    cin>>mpg;
}


void Car::setMpg(double newMPG) {
    mpg = newMPG;
}

