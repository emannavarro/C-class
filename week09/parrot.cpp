/**
    CS-11 Asn 9, parrot.cpp
    Purpose: parrot

    @author Emanuel Navarro
    @version 10/28/18
*/
#include <iostream>
using namespace std;

class ParrotClass {
public:
    ParrotClass();
    ParrotClass(string newname, int newage);
    string say(string word);
    string getname() const;
    int getage() const;
    void setage(int Newage);
    void setname(string newname);
    void eat(string food[], int size) const;



private:
    string name;
    int age;

};


int main() {
    srand(time(0));
    string food[]= { "Carrot", "Apple", "Orange", "Sun Flower Seeds" };
    ParrotClass Parrot;
    Parrot.setage(15);
    ParrotClass Tweety("Tweety",1);
    cout<<"I recently adopted a new Parrot named ";
    cout<<Tweety.getname();
    cout<<" who is ";
    cout<< Tweety.getage();
    cout<<" year old.";
    cout<< Tweety.getname();
    cout<<" plays with my older parrot named ";
    cout<<Parrot.getname();
    cout<<", who is about ";
    cout<<Parrot.getage();
    cout<<" years old. When I talk with my parrot, ";
    cout<<Parrot.getname();
    cout<<" will imitate my voice and say ";
    cout<< Parrot.say("Hello");
    cout<<".";
    cout<< Tweety.getname();
    cout<<" mostly just squawks.";
    cout<<"I gave both Polly and Tweety ";
    Parrot.eat(food,4);
    cout<<" Yum!";


    return 0;
}


ParrotClass::ParrotClass() {
    name="Polly";
    age=0;
}
ParrotClass::ParrotClass(string newname, int newage) {

    name=newname;
    age=newage;
}
void ParrotClass::setname(string newname) {
    name=newname;
}

void ParrotClass::setage(int Newage) {
    age=Newage;

}
 ParrotClass::getage() const      {
    return age;
}
string ParrotClass::say(string word) {

    string mew2= '"'+ word +'"';

    return mew2;
}
string ParrotClass::getname() const {
    return name;
}

void ParrotClass::eat(string food[], int size) const {





    cout<<"#" + food[rand()%size] +"#";

}



