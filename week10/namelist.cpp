#include <iostream>
#include<vector>
using namespace std;

  void showNames(vector<string>& names) {
         for( unsigned i = 0 ; i < names.size(); i++){
                cout<<names[i]<< endl;

            }
        }

int main() {
    // Enter your code here

    vector <string> names(3);


    names[0]="Manny";
    names[1]="Danny";
    names[2]="Linda";

    names.push_back("Dogg Dogson");

    cout << "Enter a list of names\n"
         << "When finished enter the word: done\n";
    string input;
    do {
        getline(cin, input);
        if (input != "done") {
            names.push_back(input);
        }
   } while (input != "done");
    cout<<endl;
    cout<<"The first name on the list is: " << names[0]<<endl;
    cout<<"The last name on the list is:  "<<names[names.size()-1]<<endl;


     showNames(names);









    return 0;
}
