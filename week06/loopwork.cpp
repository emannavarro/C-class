/**
    CS-11 Asn 6, loopwork.cpp
    Purpose: Loop worksheet.

    @author Emanuel Navarro
    @version 1.0 Date Completed
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0; // the integer number
    char ch = '0'; // the single character
    string msg; // the message string
    cout << "*** Loop Worksheet! ***\n";
    cout << "Enter a string message: ";
    getline(cin, msg);
    cout << "Enter a single character: ";
    cin >> ch;
    cout << "Enter an integer between 1 and 20: ";
    cin >> n;
    cout << endl;

    // Print the number (n) followed by a space n times.

    cout << "*** Printing " << n << " followed by a space " << n
         << " times ***\n#1: ";

    for (int x=0 ; x<n; x++) {

        cout<< n  << " " ;

    }

    cout << "\nThat is " << n << ", " << n << "'s\n\n";


    cout << "*** Printing a row of " << n  << " x's ***\n#2: ";


    for (int y=0 ; y<n; y++) {

        cout<< "x" ;
        // Prints a row of x's on a single line which is n characters long

    }
    cout << "\nThat's a high bar!\n" << endl;




    // Print the message (msg) followed by a newline n times.
    string m=msg;
    cout << "*** #3: Printing the string message " << n  << " times ***\n";
    for (int z=0 ; z<n; z++) {
        cout<< m << endl;

    }
    cout << "Yay! We finished!\n" << endl;

    cout << "*** Summing the numbers from 1 to " << n  << " ***\n#4: ";
    int sum=0;
    for (int o=1 ; o<=n; o++) {
        sum= sum + o;

        // loop that sums

    }
    cout << "Summing it up (" << n * (n + 1) / 2 << "): " << sum << "\n\n";

    int count=0;    //count is an int and has to be set at zero and is being compared to an unsigned int
    for ( unsigned i = 0; i < msg.length(); i++) {
        if (msg[i]== ch ) {
            count++;
        }
    }
    cout << "*** Counting the number of times '" << ch
         << "' occurs in the message ***\n";
    cout << "#5: Occurences: " << count ;


    return 0;
}

/**


// Count the number of times that the character ch occurs in the message.
cout << "*** Counting the number of times '" << ch
   << "' occurs in the message ***\n";
// See lesson 6.1.3 and put loop code after this line.
// Put loop code before this line.
int count = 0;
cout << "#5: Occurences: " << count << endl;
*/
