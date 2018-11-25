/**
    CS-11 starter
    Purpose:inclasswork

    @author Emanuel Navarro
    @version 11/13/18



*/


#include <fstream>   // for file I/O
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    ifstream fin;
    fin.open("infile.txt");
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    ofstream fout;
    fout.open("outfile.txt");
    if (fout.fail()) {
        cout << "Output file failed to open.\n";
        exit(-1);
    }

    int first, second, third;
    fin >> first >> second >> third;
    fout << "The sum of the first 3\n"
         << "numbers in infile.txt\n"
         << "is " << (first + second + third)
         << endl;

    fin.close();
    fout.close();

    cout << "Processing completed\n";

    return 0;
}