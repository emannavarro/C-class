/**
    CS-11 Asn 11, elections.cpp
    Purpose: improved hw

    @author Emanuel Navarro and Rajwan Silwal
    @version 11/13/18
*/
#include <iostream>
#include<iomanip>
using namespace std;
#include <vector>
class Candidate {

public:

    Candidate();
    Candidate(string Newname, int Newvote, double Newspending);
    string getname() const;
    int getvote() const;
    double getspending() const;
    void setname(string Newname);
    void setvote(int Newvote);
    void setspending( double Newspending);
    void print() const;
    void read();
    double getDollarsPerVote() const;
    void toString();

private:
    string name;
    int votes;
    double spending;


};

void listcandidates(vector<Candidate>& Candidate);
void addcandidate(vector<Candidate>& Candidate);
void deletecandidate(vector<Candidate>& Candidate);
void changecandidatespending(vector<Candidate>& Can);
void listbyrange(vector<Candidate>& Can);

int main() {
    int input=10;
    Candidate Sophie("Sophie Engineer", 42,102280.00);
    Candidate Emma("Emma Hacker",24,71916.00);
    Candidate John("John Q Public",37,55775.3);

    vector<Candidate> Can;
    Can.push_back(Sophie);
    Can.push_back(Emma);
    Can.push_back(John);

    while( input!=0) {
        cout<<"Please choose one of the following operations:"<<endl;
        cout<<"0. Exit program"<<endl;
        cout<<"1. List candidates"<<endl;
        cout<<"2. Add a candidate"<<endl;
        cout<<"3. Delete a candidate"<<endl;
        cout<<"4. Change candidate spending"<<endl;
        cout<<"5. List by votes range"<<endl;
        cout<<"Choice (0-5):";
        cin>>input;
        cout<< endl;

        if(input==0) {
            return 0;
        } else if(input==1) {
            listcandidates(Can);
        } else if(input==2) {
            addcandidate(Can);
        } else if(input==3) {
            deletecandidate(Can);
        } else if(input==4) {
            changecandidatespending(Can);
        } else if(input==5) {
            listbyrange(Can);
        }

        cout<<endl;
    }





    return 0;
}


Candidate::Candidate() {
    name="none";
    votes=0;
    spending=0.0;

}
Candidate::Candidate(string Newname, int Newvote, double Newspending) {
    name=Newname;
    votes=Newvote;
    spending=Newspending;


}
string Candidate::getname() const {
    return name;
}
int Candidate::getvote() const {
    return votes;
}
double Candidate::getspending() const {
    return spending;
}
void Candidate::setname(string Newname) {
    name=Newname;
}
void Candidate::setvote(int Newvote) {
    votes=Newvote;
}
void Candidate::setspending(double Newspending) {

    spending=Newspending;
}
void Candidate::print() const {
    cout<< fixed<<setprecision(2);
    cout<<setw(15)<<left<<name<<right<<setw(10)<<votes<< setw(12)
        <<spending<< setw(11)<<getDollarsPerVote();
}
double Candidate::getDollarsPerVote() const {

    double DollarsPerVote=spending/votes;
    return DollarsPerVote;
}

void Candidate::toString() {

    cout<<setw(15)<<left<<name<<right<<setw(10)<<votes<< setw(12)
        <<spending<< setw(11)<<getDollarsPerVote();

}


void listcandidates(vector<Candidate>& Candidate) {
    int counter=0;
    cout<<"Candidate list:"<<endl;
    cout<<"# Name                 Votes  $Spending   $Per Vote"<<endl;
    for(unsigned i=0; i<Candidate.size(); i++) {
        counter++;
        cout<<counter<<" ";
        Candidate[i].print();
        cout<<endl;
    }



}
void addcandidate(vector<Candidate>& Can) {
    string name;
    int vote; //size=0;
    double spending;
    cout<<"Adding a new candidate:"<<endl;
    //created a do while loop to deal with bad input
    /* do {
           cout<<"Enter the number of the candidate:";
           cin>>size;
         if (cin.fail()) {
                 cout << "You must enter digits, not words\n";
                 cin.clear();
                 cin.ignore(1000, '\n');
                 size = -1; // set loop test to fail
             } else if (size <= 0.0) {
                         cout << "You must enter a positive number\n";
                     }
     } while (size <= 0.0);
         */

    //for( int i=0; i<size; i++){
    cout<<"Enter the name of the person:";
    cin >> ws;
    getline (cin,name);
    cout<<"Enter the votes for "<<name<<":";
    cin>>vote;
    cout<<"Enter the spending for "<<name<<":";
    cin>>spending;
    Candidate newcandidate(name, vote, spending);
    Can.push_back(newcandidate);
    //  }
    listcandidates(Can);

    //Candidate name;
    //Can.push_back(1);


}
void deletecandidate(vector<Candidate>& Can) {
    unsigned int nums=Can.size();
    int numb;

    cout<<"Deleting a candidate:"<<endl;
    listcandidates(Can);
    cout<<"Enter the number of the candidate:";
    cin>>numb;



    for( unsigned i=numb; i<nums; i++) {

        Can[i-1]=Can[i];

    }
    Can.pop_back();
    listcandidates(Can);


}

void changecandidatespending(vector<Candidate>& Can) {

    int cannumb;
    double newspending;
    cout<<"Change spending for a candidate:"<<endl;
    listcandidates(Can);
    cout<<"Enter the number of the candidate: ";
    cin>>cannumb;
    cout<<"Enter the new spending: ";
    cin>>newspending;

    Can[cannumb-1].setspending(newspending);
    listcandidates(Can);


}
void listbyrange(vector<Candidate>& Can) {
    int min, max;
    cout<<"Enter the minimum votes: ";
    cin>>min;
    cout<<"Enter the maximum votes: ";
    cin>>max;
    cout<<"Name                Votes     Spending"<< endl;
    for(unsigned i=0; i< Can.size(); i++) {

        if( min<=Can[i].getvote() && max>=Can[i].getvote() ) {

            Can[i].toString();
            cout<<endl;
        }

    }



}

