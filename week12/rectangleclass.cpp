/**
    CS-11 Asn 12, rectanglesclass.cpp
    Purpose: inclass

    @author Emanuel Navarro
    @version 11/23/18
*/

#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle();
    Rectangle(double newLength, double newWidth);
    void print();
private:
    double length;
    double width;
};

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth) {
    length = newLength;
    width = newWidth;
}

void Rectangle::print() {
    cout << length << " long x " << width << " wide\n";
}

// For testing
int main() {
    Rectangle rec;
    Rectangle rec3x5(3.0, 5.0);
    cout << "Printing rec: ";
    rec.print();
    cout << "Printing rec3x5: ";
    rec3x5.print();

    return 0;
}