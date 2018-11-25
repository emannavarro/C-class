/**
    CS-11 Asn 12, productapp.cpp
    Purpose: inclass

    @author Emanuel Navarro
    @version 11/23/18
*/
#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    Product();
    Product(string newName, double newPrice);
    string getName() const;
    double getPrice() const;
    void setName(string newName);
    void setPrice(double newPrice);
    void print() const;
private:
    string name;
    double price;
};

Product::Product() {
    name = "none";
    price = 0.0;
}

Product::Product(string newName, double newPrice) {
    setName(newName);
    setPrice(newPrice);
}

string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

void Product::setName(string newName) {
    name = newName;
}

void Product::setPrice(double newPrice) {
    price = newPrice;
}

void Product::print() const {
    cout <<  name << " @ " << price << endl;
}

// Function that returns an object
Product makeProduct();

// For testing class Product
int main() {
    vector<Product> store;
    char repeat = 'Y';
    while ('Y' == repeat || 'y' == repeat) {
        cout << "Enter product data:\n";
        Product temp = makeProduct();
        store.push_back(temp);
        cout << "You entered:"
             << "\n   Name: " << temp.getName()
             << "\n   Price: " << temp.getPrice()
             << endl;

        cout << "Enter another product? (y/n): ";
        cin >> repeat;
    }

    cout << "\nAll your products:\n";
    for (unsigned i = 0; i < store.size(); i++) {
        store[i].print();
    }

    return 0;
}

Product makeProduct() {
    string name;
    cout << "Product name: ";
    cin >> name;
    double price;
    cout << "Price for a " << name << ": ";
    cin >> price;
    Product newProd(name, price);
    return newProd;
}