/**
    CS-11 Asn 6, realfake.cpp
    Purpose: realfake news detecor

    @author Emanuel Navarro
    @version 1.0 10/4/18
*/

#include <iostream>
using namespace std;

int main() {
    string word;
    int count = 0;
    while (cin >> word) {
        count++;
        if (word == "(MakeAmericaTheBest)") {
            cout<< "News from Make America TheBest is ";
            cout << "Fake " << endl;
        } else if (word=="(YourNewsWire)") {
            cout<< " News from YourNewsWire is ";
            cout<<"Fake "<< count<< endl;
        } else if (word== "(USAToday)") {
            cout<< " News from USA Today is ";
            cout<<"Real "<< endl;
        } else if(word== "(NYTimes)") {
            cout<< " News from NYTimes is ";
            cout<<"Real "<< endl;
        } else if(word== "(WashingtonPost)") {
            cout<< " News from WashingtonPost is ";
            cout<<"Real "<< endl;
        }
    }
    return 0;
}
