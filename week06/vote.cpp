/**
    CS-11 Asn 6, vote.cpp
    Purpose: vote

    @author Emanuel Navarro
    @version 1.0 10/4/18
*/

#include <iostream>
using namespace std;

int main() {
    int Dalicount=0;
    int Sanderscount=0;
    int Hartmancount=0;
    int n=1;
    char ch=0;
    char repeat = 'y';

    cout<< " *** Voting Machine App***" << endl<< endl;
    while ('y' == repeat) {
        cout<< "Candidate A: Dali Lama" << endl;
        cout<< "Candidate B: Bernie Sanders" << endl;
        cout<< "Candidate C: Bruce Hartman" << endl;
        cout<< "Enter your vote (A-C): ";
        cin>>ch;


        if ( ch== 'A') {

            for (int y=0 ; y<n; y++) {
                Dalicount++;
                cout << "You chose candidate: Dali Lama"<< endl<< endl;
                repeat='y';
            }
        } else if ( ch== 'B') {

            for (int x=0 ; x<n; x++) {
                Sanderscount++;
                cout << "You chose candidate: Bernie Sanders"<< endl<< endl;
                repeat='y';
            }



        } else if ( ch== 'C') {

            for (int z=0 ; z<n; z++) {
                Hartmancount++;
                cout << "You chose candidate: Bruce Hartman"<< endl<< endl;
                repeat='y';
            }
        } else if ( ch== 'X') {

            repeat='x';

        }
    }

    cout<< "*** Election Results ***"<< endl;
    cout<< "Dali Lama       "<<Dalicount<< endl;
    cout<< "Bernie Sanders  " <<Sanderscount<< endl;
    cout<< "Bruce Hartman      "<<Hartmancount;













    return 0;
}