/**
    CS-11 Asn 3
    carbot.cpp
    Purpose: Chatty Carbot

    @author Emanuel Navarro
    @version 1.1 9/19/18
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    string yourname, home, car;
    int monthloan, carcost, downpayment;
    double annual_rate; //, //MRR=annual_rate/100.00;
    cout << "My name is kerberos." << endl;
    cout << "What is your name? " ;
    cin>> yourname;
    cout << "It's nice to meet you " << yourname << "."<<endl;
    cout << "Where are you from? ";
    cin >> home;
    cout <<home<< " sounds like a nice place to be from!"<< endl;
    cout << "What is your favorite number? ";
    int favnumb;
    cin >> favnumb;

    if (favnumb >7) {
        cout << "Your number "<< favnumb << " is "<< (favnumb/7)<<" times as big as my favorite number, which"<< endl;
        cout<<"is (7)."<< endl;
    } else if (favnumb < 7) {
        cout << "Your number "<< favnumb << " is "<< (7/favnumb)<<" times smaller than my favorite number, which is (7)."<< endl;
    }
    cout<< "What is your dream car?";
    cin>> car;
    cout<<"Wow, I've always wanted a "<<car<< " too."<< endl;
    cout <<"How much does a " <<car<< " cost?";
    cin>>carcost;
    cout<< "Wow, "<<carcost<< " is spendy"<<endl;
    cout<<"How much of a down payment can you afford?";
    cin>>downpayment;
    if ( downpayment< 250000) {
        cout<<"With a down payment of $"<<downpayment<< " you will need a loan."<< endl;
    } else if ( downpayment>= 250000) {
        cout<< "Awesome! It must be nice to be rich!"<< endl;
        cout<<"Since rich people just got a huge tax break you can buy your"<< endl;
        cout<<"dream car anytime!"<< endl;
        cout<<"Well, gotta go study now. Goodbye " <<yourname<<"." <<endl;

        return 0;

    }

    double monthInt = (carcost-downpayment) * annual_rate/1200 /(1-(pow(1+annual_rate/1200,-1 * monthloan))) ;
    cout<< "How many months would do you need for the loan?";
    cin>>monthloan;
    cout<<"For a "<< monthloan<< " months loan, what is the annual interest rate you can"<<endl;
    cout<<"get (%)?";
    cin>>annual_rate;
    cout<< "If you bought the "<<car<< " with a down payment of "<<downpayment<< ","<< endl;
    cout<< "  you would have a monthly payment of $"
        << monthInt
        << "."<<endl;
    cout<< "Over "<<monthloan<< " months that is a total of $"<<monthInt *60 << "!"<< endl;
    cout << "After you graduate and get a job as a software engineer,"<< endl;
    cout<<"  maybe you will buy your dream car."<< endl;
    cout<< "Well, gotta go study now. Goodbye "<< yourname<< "."<<endl;






    return 0;


}
