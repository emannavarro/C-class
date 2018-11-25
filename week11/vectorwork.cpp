/**
    CS-11 Asn 11
    vectorwork.cpp
    Purpose: represents a catalog of nearby stars.

    @author Emanuel Navarro and Rajwan Silwal
    @version 1.0 11/10/18
 */
#include <iostream>
#include <vector>
using namespace std;

/**
    Returns true if the sum of the first and last elements equals 42
    AND the vector size >= 1. Examples:
    checkSum({12, 20, 5, 30}) ? true
    checkSum({41, 2, 60, 1}) ? true
    checkSum({42}) ? false

    @param data The vector to test.
    @return true if sum of first and last is 42, otherwise false.
    Credit: Alex Ginella
*/
bool firstLastSum42(const vector<int>& data);

/**
    Given an array of ints, return true if one of the first 4 elements in the
    vector is a 9. The vector length may be less than 4. Examples:
    equalFirstLast({1, 2, 3}) ? false
    equalFirstLast({1, 2, 3, 9}) ? true
    equalFirstLast({9, 2, 1}) ? true

   @param data The vector to test.
   @param return true if 10 is the first or last element; otherwise false.
*/
bool front9(const vector<int>& data);

/**
    Given a vector of char's, uses ASCII to count how many elements are
    numbers. Examples:
    countDigits({'a', '9', 'Z'}) -> 1
    countDigits({'L', '3', '3', 't'}) -> 2
    countDigits({'W', '0', '0', 't', '!', '4', '2'}) -> 4

   @param data The vector to modify.
*/
int countDigits(vector<char>& data);

/**
   Prints all the elements in a vector to the console on one line with a space
   between each element. See class notes in lesson 10.3 for examples.

   @param data The vector to print.
*/
void printVector(const vector<int>& data);

/**
    Replaces the second element with the last element and shortens the vector
    if the vector length is greater than 1. See lesson 10.3.3. Examples:
    remove2({1, 2, 3}) -> {1,3}
    remove2({3, 5, 6, 8, 9}) -> {3, 9, 6, 8}
    remove2({1, 2, 1}) -> {1, 1)

    @param data The vector to modify.
    Credit: Nick Flores
*/

void erase2(vector<int>& data);


int main() {
    //Remove comments as you develop functions.
    bool answer = false;
    int num = 0;
    cout << boolalpha;;
    cout << "***Testing firstLastSum42***" << endl;
    const int A10 = 10, A30 = 30, A41 = 41;
    vector<int> data1 = {1, 2, A41};
    answer = firstLastSum42(data1);
    cout << "firstLastSum42a should be true: " << answer << endl;
    vector<int> data2 = {A10, 1, 2, A30};
    answer = firstLastSum42(data2);
    cout << "firstLastSum42b should be false: " << answer << endl;
    vector<int> data3 = {A30, A10, 1, 2, A41};
    answer = firstLastSum42(data3);
    cout << "firstLastSum42c should be false: " << answer << endl;


// Remove comments as you develop functions.
    cout << "\n***Testing front9***"<< endl;
    const int A3 = 3, A9 = 9;
    vector<int> data4 = {1, A9, 2, 3};
    answer = front9(data4);
    cout << "front9a should be true: " << answer << endl;
    vector<int> data5 = {0, 1, 2, A3, A9};
    answer = front9(data5);
    cout << "front9b should be false: " << answer << endl;
    vector<int> data6 = {A9};
    answer = front9(data6);
    cout << "front9c should be true: " << answer << endl;


    cout << "\n***Testing countDigits***" << endl;
    vector<char> data7 = {'a', '9', 'Z'};
    num = countDigits(data7);
    cout << "countDigits1 should be 1: " << num << endl;
    vector<char> data8 = {'L', '3', '3', 't'};
    num = countDigits(data8);
    cout << "countDigits2 should be 2: " << num << endl;
    vector<char> data9 = {'W', '0', '0', 't', '!', '4', '2'};
    num = countDigits(data9);
    cout << "countDigits3 should be 4: " << num << endl;



    cout << "\n***Testing printVector***" << endl;
    vector<int> data10 = {1, 2, A3};
    cout << "printVector1 should be 1 2 3: ";
    printVector(data10);
    const int A50 = 50, A79 = 79, A85 = 85;
    vector<int> data11 = {A10, A30, A50, A79, A85};
    cout << "printVector2 should be 10 30 50 79 85: ";
    printVector(data11);
    const int A5 = 5;
    vector<int> data12 = {A5};
    cout << "printVector3 should be 5: ";
    printVector(data12);


    cout << "\n***Testing erase2***" << endl;
    vector<int> data13 = {1, 2, A3};
    erase2(data13);
    cout << "erase2a should be 1 3: ";
    printVector(data13);
    const int A6 = 6, A8 = 8;
    vector<int> data14 = {A3, A5, A6, A8, A9};
    erase2(data14);
    cout << "erase2b should be 3 9 6 8: ";
    printVector(data14);
    vector<int> data15 = {1, 2, 1};
    erase2(data15);
    cout << "erase2c should be 1 1: ";
    printVector(data15);


    cout << "\n***End of Tests***" << endl;

    return 0;
}


bool firstLastSum42(const vector<int>& data) {

    if( data[0]+ data[data.size()-1]==42) {

        return true;

    } else {
        return false;

    }



}


bool front9(const vector<int>& data) {


    for(unsigned t=0; t<4; t++) {
        if(9==data.at(t)) {
            return true;
        } else if(9!=data.at(t)) {

        }
    }
    return false;
}




int countDigits(vector<char>& data) {

    int digit=0;

    for (unsigned i=0; i<data.size(); i++) {
        if(data[i]>=48 && data[i]<=57) {
            digit++;
        }
    }
    return digit;
}

void printVector(const vector<int>& data) {

    for(unsigned l=0; l<data.size(); l++) {

        cout<< data[l]<<" ";

    }
    cout<< endl;

}

void erase2(vector<int>& data) {

    data[1]=data[data.size()-1];
    data.pop_back();
}


