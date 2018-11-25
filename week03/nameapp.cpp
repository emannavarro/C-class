#include <iostream>
using namespace std;

int main() {
    string firstname, lastname, fullname;
    cout << "First name: ";
    cin >> firstname;
    cout << "Last name: ";
    cin >> lastname;
    fullname = firstname + " " + lastname;
    cout<< "Welcome \"" << fullname << "\"!\n";
    string initials = firstname.substr(0,1) +lastname.substr(0,1);
    cout<< "Your initials: "<< initials<< endl;


    return 0;
}