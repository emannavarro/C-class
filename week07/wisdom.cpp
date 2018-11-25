/**
    CS-11 Asn 7, wisdom.cpp
    Purpose: wisdom Gen

    @author Emanuel Navarro
    @version 10/15/18
*/

#include <iostream>
#include <cstdlib>
using namespace std;
/*
This block of code randomly chooses a value at random from the array startpharses and concatenates it with with another value
from the array endphrases.
*/

string composeSaying (string compose)
{
    srand(time(0));
    int p=rand()%12;
    int q=rand()%20;

    string startphrases[]= {"The sky","Tomorrow","A sweet apple","A sound you heard","Another day","Tranquility",
                            "Wondrous awe","Clear water","The flow of quizzes","Love","Significant understanding",
                            "A school class"
                           };
    string endphrases[]= {"runs through everything.","is ever present.","is still not very coherent.","makes people shiver.",
                          "is always a pleasure.","is good for you.","sees the sun.","is often one floor above you.","wants to set things right.",
                          "asked you a question?","welcomes spring!","loves a good joke!","is a storyteller without equal.","bathes in sunlight.",
                          "wanted the TRUTH!","ever stuns the onlooker.","brings both pleasure and pain.","is not enough.","was always the second best.",
                          "always strikes for the heart."
                         };
    compose=startphrases[p] + " " + endphrases[q];

    return compose ;

}




int main()
{
    cout<<"*** Random Wise Sayings ***"<< endl<<endl;
    char repeat = 'y';
    while ('y' == repeat)
    {
        string startph=composeSaying(startph);

        cout<<startph<< endl;




        cout<<"<Do you want to compose another saying? (y/n)";
        cin>>repeat;
        cout<<endl;
        if(repeat!='y')
        {
            cout<<"Goodbye.";
        }


    }


    return 0;
}