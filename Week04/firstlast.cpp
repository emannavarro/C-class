/**
    CS-11 Asn 4
    firstlast.cpp
    Purpose: comparing first and last letter

    @author Emanuel Navarro
    @version 1.1 9/22/18
*/

#include <iostream>
using namespace std;

int main() {
    char repeat = 'y';
    while ('y' == repeat) {
        cout<< "*** Comparing First and Last Characters ***"<< endl<< endl;
        string Firstw;
        cout <<"Input a word:";
        cin>>Firstw;
        if (Firstw.substr(0,1) < Firstw.substr(Firstw.length()-1)) {
            cout<< "First letter "<<Firstw.substr(0,1)<<" is earlier in the alphabet." <<endl;
        } else if (Firstw.substr(0,1) > Firstw.substr(Firstw.length()-1) ) {
            cout<< "Last letter "<<Firstw.substr(Firstw.length()-1)<<" is earlier in the alphabet."<< endl;
        } else  {
            cout<< "First and last characters are the same"<< endl;
        }
        cout << "Run again? (y/n) ";
        cin >> repeat;
    }


    return 0;
}