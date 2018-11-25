/**
CS-11 Asn 11
xvectorwork.cpp
Purpose: extra credit work

@author Emanuel Navarro
@version 1.0 11/15/18
*/

#include <iostream>
#include <vector>
using namespace std;



//Swaps the position of any two vector positions

void insertposition(vector<int>& data);

int main() {

    cout<<"A fun swaping game!"<<endl;
    cout<<"Let's play!!!"<<endl;


    vector<int> data= {1, 4, 2, 3, 7, 10};
    for(unsigned int i; i< data.size(); i++) {

        cout<<"[Position "<<i+1<<"]: "<<data[i]<<endl;
    }

    insertposition(data);

    for(unsigned int j ; j<data.size(); j++) {


        cout<<"[New Positions "<<j+1<<"]: "<<data[j]<<endl;

    }

*** Testing Extra Credit myFabFun ***








    return 0;

}
void insertposition(vector<int>& data) {

    int pos=0, dest=0;
    cout<<"Enter intital position you want to swap: ";
    cin>>pos;
    cout<<"Enter the final destination(position number) of swap: ";
    cin>>dest;


    data.push_back(5);


    data[data.size()-1]=data[pos-1];
    data[pos-1]=data[dest-1];
    data[dest-1]=data[data.size()-1];

    data.pop_back();




}