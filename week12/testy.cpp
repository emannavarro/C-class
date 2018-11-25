/**
    CS-11 Asn 12, testy.cpp
    Purpose: inclass

    @author Emanuel Navarro
    @version 11/23/18
*/

#include <fstream>   // for file I/O
#include <iostream>  // for cout
#include <cstdlib>   // for exit()
using namespace std;

int main() {
    string name;
    double price;
    ifstream fin("products2.txt");
    if (fin.fail())
    {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    while (fin.good())
    {
        fin >> ws; // clear whitespace including newlines
        getline(fin, name);
        fin >> price;
        if (fin.good()) {
            cout << name << " @ " << price << endl;
        }
    }
    fin.close();

    return 0;
}