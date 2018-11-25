/**
    CS-11 Asn 9, canadate.cpp
    Purpose: canidate cost per elections

    @author Emanuel Navarro and Rajwan Silwal
    @version 10/28/18
*/
#include <iostream>
#include<iomanip>
using namespace std;

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
    double getDollarsPerVote() const;
    void toString();

private:
    string name;
    int votes;
    double spending;


};


int main() {
    cout<<"Candidates of Interest:" << endl;
    cout<<left<<setw(14)<<"Name"<<right<<setw(10)<<right<<setw(12)<<"Votes"
        <<setw(11)<<"$Spending"<<setw(11)<<"$Per Vote"<< endl;
    Candidate Emma("Emma Candidate", 42, 72470.42);
    Emma.print();
    cout<<endl;
    Candidate Frank("Frank Schmuck",24,71916.24);
    Frank.print();
    cout<<endl;
    Candidate Polly = Candidate();
    Polly.setname("Polly Tichian");
    Polly.setvote(37);
    Polly.setspending(55775.37);
    Polly.print();

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