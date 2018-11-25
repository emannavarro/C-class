#include <iostream>
using namespace std;

int main() {

    string FirstName, LastName, Mname, Fname;
    cout << "Want to learn your ""dragon name?""" << endl;
    cout << "Please enter your first name and last name:";
    cin>> FirstName>>LastName;
    cout <<"Please enter your mother's first name: ";
    cin>> Mname;
    cout << "Please enter your father's first name: ";
    cin>> Fname;
    cout << "Your ""dragon name is:""" << LastName.substr(0,2) + FirstName.substr(3,4) + " "+Mname.substr(0,2) + Fname.substr(2,3) << endl ;
    return 0;
}