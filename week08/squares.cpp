/**
    CS-11 Asn 8, squares.cpp
    Purpose: squares

    @author Emanuel Navarro
    @version 10/22/18
*/

#include <iostream>
using namespace std;

void printSquares (int size ) {

    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= size; col++) {
            cout << "*";
        }
        cout << endl; // newline before next row
    }
    return;

}



int main() {
    int length = 1;

    while (length > 0) {
        cout << "\nI will print squares for you!\n";
        cout << "Enter the length of a side (-1 to quit): ";
        cin >> length;
        printSquares(length);
    }
    cout << "Thanks for \"squaring\" with me!" << endl;

    return 0;
}