/**
    CS-11 Asn 12 readwriter
    Purpose: inclass work

    @author Emanuel Navarro
    @version 11/23/18
*/

#include <iostream>
#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
using namespace std;
#include <vector>



void readData(vector<double>& data) {

    ifstream fin;
    fin.open("rawdata.txt");
    if(fin.fail()) {
        cout<<"Input file failed to open. \n";
        exit(-1);
    }
    double nextNum;
    while(fin>>nextNum) {

        cout<< "Read: "<<nextNum<<endl;
        data.push_back(nextNum);
    }
    fin.close();
}

int main() {

    vector<double> data;
    readData(data);
    cout<<"Vectord data: \n";
    for( unsigned i=0; i<data.size(); i++) {
        cout<<data[i]<<endl;
    }



    return 0;
}