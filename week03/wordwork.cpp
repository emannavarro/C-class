/**
    CS-11 Asn 3, wordwork.cpp
    Purpose: Work with string concatenation and functions.

    @author Emanuel Navarro
    @version 1.0 Date Completed
*/
#include <iostream>
using namespace std;

int main() {
    // Do NOT change the next few lines
    // Read words from stdin and print their values to stdout.
    cout << "*** Word Worksheet ***\n";
    string first, second;
    cout << "Enter two words separated by a space, and press the Enter key";
    cout << "\nFor example: Hello World!<Enter>: ";
    cin >> first >> second;
    cout << "\nYou entered: first = \"" << first << "\" and second = \""
         << second << "\"\n";
    cout << "Parenthesis below show correct results for example words.\n\n";
    // Make changes after this line where stated in comments.

    // 1. Length (lesson 3.2.6 + 3.3.1)
    cout << "*** Measuring word length ***\n";
    //int firstLength, secondLength;
    // Find length of both words and assign to firstLength and secondLength.
    string firstLength=first, secondLength=second;
    // Measure length of first word on this line.
    //secondLength = 0; // Measure length of second word on this line.
    cout << "First word length (5): " << firstLength.length() << endl;
    cout << "Second word length (6): " << secondLength.length() << endl;
    if ( firstLength.length() < secondLength.length())

        cout << "Longest word (World!): " << secondLength<< endl<< endl;

    else if( secondLength.length()< firstLength.length())

        cout << "Longest word (World!): " <<firstLength << endl << endl;


    cout << "*** Concatenating strings ***\n";
    string msg, first1=first, second1=second;
    // Concatenate second followed by ", " followed by first and assign to msg.
    msg = second1 +", " + first1; // Assign concatenated parts on this line.
    cout << "Concatenated (" << second1 <<" , "<< first1<< "): " << msg << endl << endl;

    // 3. Extracted first and last parts using substr() (lesson 3.2.5 + 3.2.6)
    cout << "*** Extracting substrings ***\n";
    // Concatenate first 2 letters of first and last 3 letters of second.

    //string int extract_1 ; // Assign concatenated parts on this line.
    string extract_1=first, extract_2=second, ext, ext2;
    cout << "Extracted (Held!): " << extract_1.substr(0,2)+extract_2.substr(3,4) << endl << endl;

    // 4. Show concatenated middles (lesson 3.2.5 + 3.2.6)
    cout << "*** Extracting the middle of strings ***\n";
    // Remove the first 2 and last 1 characters of both words and join them.

    string middles= first, middles1=second ;  // Assign concatenated parts on this line.// here is good line
    // Assign concatenated parts on this line.
    cout << "Middles (llrld): " <<  middles.substr(2,2)+ middles1.substr(2,3)<< endl << endl;

    // 5. Comparing string letters (lesson 3.3.3)

    cout << "*** Comparing first letter of both words ***\n";
    string compare=first, compare1=second;
    if ( compare.substr(0,1) < compare1.substr(0,1))

        cout << "Largest first letter (W): "<<compare1.substr(0,1)<< endl;

    else if (compare1.substr(0,1) < compare.substr(0,1))

        cout << "Largest first letter (W): "<<compare.substr(0,1)<< endl;


    // Add if-statements to test first letter of each word and print largest.
    cout << endl << endl; // Add if-statements before this line.



    return 0;
}