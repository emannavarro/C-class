/**
    CS-11 Asn 4
    drought.cpp
    Purpose: Drought

    @author Emanuel Navarro
    @version 1.1 9/26/18
*/
#include <iostream>
using namespace std;

int main() {

    cout<< "*** Drought Monitor ***"<< endl <<endl;
    char repeat = 'y';
    while ('y' == repeat) {
        double Average=0, Current=0;
        //string Severity;
        cout<< "Average rainfall YTD:";
        cin>>Average;
        cout<<"Current rainfall YTD:";
        cin>>Current;
        cout<< "Rainfall of " <<Current<< " is " << (Current / Average) *100 << "% "<< "of the average of "<<Average<<"." << endl;
        double Percent=(Current / Average) *100;
        if (Percent >60) {
            cout<<"Water year intensity: normal rainfall."<< endl;
        } else if (Percent >= 41) {
            cout<<"Water year intensity: Abnormally Dry."<< endl;
        } else if (Percent >= 21) {
            cout<<"Water year intensity: Moderate Drought."<< endl;
        } else if (Percent >=11) {
            cout<<"Water year intensity: Severe Drought."<< endl;
        } else if (Percent >=5) {
            cout<<"Water year intensity: Extreme Drought."<< endl;
        } else {
            cout<<"Water year intensity: Exceptional Drought."<< endl;
            //this

        }
        cout<<"statemen";
        cout << "Run again? (y/n) ";
        cin >> repeat;
    }








    return 0;


}