/**
    CS-11 Asn 12, filelist.cpp
    Purpose: inclass

    @author Emanuel Navarro
    @version 11/23/18
*/

#include <iostream>
#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
using namespace std;
void readFile(string filename);
int main() {
    readFile("products.txt");
    return 0;
}


void readFile(string filename) {
    ifstream fin(filename.c_str());
    while (fin.good()) {
        string name;
        double price;
        fin >> ws; // clear whitespace including newlines
        getline(fin, name);
        fin >> price;
        if (fin.good()) { // verify not end-of-file
            cout << name << " @ " << price << endl;
        }
    }



}