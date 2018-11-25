#include<iostream>
using namespace std;
/*
 This function prints out Hello Bitches!
*/
void printcostbooks(int x, int y);



int main() {
    int price=0, booksamount=0;
    cout<<" what is the average cost of your books? ";
    cin>>price;
    cout<<" How many books did you buy this semester ";
    cin>>booksamount;

    printcostbooks(price,booksamount);


}
void printcostbooks(int x, int y) {

    int z= x*y;

    cout<< "you spent "<<z<< "$"<<" on books this semester!"<< endl;
}
