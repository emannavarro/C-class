/**
    CS-11 Asn 8, funwork2.cpp
    Purpose: Practice writing functions.

    @author Emanuel Navarro
    @version 1.0 10/20/18 currently 100%
*/
#include <iostream>
using namespace std;

/**
    Given two temperatures, return true if one is less than 0
    and the other is greater than 100.
    @param temp1 First temperature to test.
    @param temp2 Second temperature to test.
    @return true if icy-hot; otherwise false.

    Test cases:
    icyHot(120, -1) ? true
    icyHot(-1, 120) ? true
    icyHot(2, 120) ? false
*/
bool icyHot(int temp1, int temp2);

/**
    Given a char, uses ASCII to determine if it is a number.
    @param num The character to test.
    @returns true if num is a number (0-9); otherwise returns false.

    Test cases:
    isNumber('a') ? false
    isNumber('3') ? true
*/
bool isNumber(char num);

/**
    Given a string, converts any number in the string to a '+'.
    @param str The string to convert, which is returned by reference.

    Test cases:
    plusOut("123 East 9th St") -> "+++ East +th St"
    plusOut("Agent 007") -> "Agent +++"
    Hint: Use a for loop, and string indexing as in password project.
*/
void plusOut(string& str);

/**
    Given a string, capitalizes all letters in the string using ASCII codes
    and if statements. Do NOT use toupper() or similar string functions.
    @param str The string to convert, which is returned by reference.

    Test cases:
    capitalizeString("I love cookies!") -> "I LOVE COOKIES!"
    capitalizeString("124 East Central Ave") -> "124 EAST CENTRAL AVE"
*/
void capitalizeString(string& str);

/**
    Prints the contents of an array with a for loop all on one line with a
    space between each number. Ends by printing a newline.
    @param data The array to print.
    @param size The number of elements in the array.
    @see lesson 8.1.4
*/
void printArray(const int data[], int size);

/**
    Given an array of ints, return true if the array is size 1 or more,
    AND the first element and the last element are equal.
    @param array An array of int numbers.
    @param size The number of elements in the array.

    Test cases:
    equalFirstLast([1, 2, 3], 3) ? false
    equalFirstLast([1, 2, 3, 1], 4) ? true
    equalFirstLast([1, 2, 1], 3) ? true
    equalFirstLast([3], 1) ? true
*/
bool equalFirstLast(int array[], int size);

/**
    Given an array of ints, multiplies each element in the array by itself.
    Remember that arrays are automatically pass by reference
    @param array An array of int numbers.
    @param size The number of elements in the array.

    Test cases:
    squareArray([1, 2, 3], 3) -> [1, 4, 9]
    squareArraysquareArray([3, 5, 6, 8, 9], 5) -> [9, 25, 36, 64, 81]
    squareArray([3], 1) -> [9]
*/
void squareArray(int array[], int size);

int main() {
    bool answer = false;
    string str;
    cout << boolalpha;

    cout << "***Testing icyHot***" << endl;
    answer = icyHot(120, -1); // uncomment after writing function
    cout << "icyHot1 should be true: " << answer << endl;
    answer = icyHot(-1, 120); // uncomment after writing function
    cout << "icyHot2 should be true: " << answer << endl;
    answer = icyHot(2, 120); // uncomment after writing function
    cout << "icyHot3 should be false: " << answer << endl;

    cout << "\n***Testing isNumber***"<< endl;
    answer = isNumber('a'); // uncomment after writing function
    cout << "isNumber1 should be false: " << answer << endl;
    answer = isNumber('9'); // uncomment after writing function
    cout << "isNumber2 should be true: " << answer << endl;

    cout << "\n***Testing capitalizeString***" << endl;
    str = "I love cookies!";
    capitalizeString(str); // uncomment after writing function
    cout << "capitalize1 should print I LOVE COOKIES!: " << str << endl;
    str = "124 East 9th St";
    capitalizeString(str); // uncomment after writing function
    cout << "capitalize2 should print 124 EAST 9TH ST: " << str << endl;

    cout << "\n***Testing plusOut***"<< endl;
    str = "123 East 9th Ave";
    plusOut(str); // uncomment after writing function
    cout << "plusOut1 should be +++ East +th Ave: " << str << endl;
    str = "Agent 007";
    plusOut(str); // uncomment after writing function
    cout << "plusOut2 should be Agent +++: " << str << endl;
    str = "Phone (123) 456-7890";
    plusOut(str); // uncomment after writing function
    cout << "plusOut3 should be Phone (+++) +++-++++: " << str << endl;

    cout << "\n***Testing printArray***" << endl;
    const int A3 = 3;
    int array1[] = {1, 2, A3};
    const int SIZE1 = 3;
    cout << "printArray1 should be 1 2 3: ";
    const int A10 = 10, A30 = 30, A50 = 50, A79 = 79;
    printArray(array1, SIZE1); // uncomment after writing function
    int array2[] = {A10, A30, A50, A79, A10};
    const int SIZE2 = 5;
    cout << "printArray2 should be 10 30 50 79 10: ";
    printArray(array2, SIZE2); // uncomment after writing function
    int array3[] = {A3};
    const int SIZE3 = 1;
    cout << "printArray3 should be 3: ";
    printArray(array3, SIZE3); // uncomment after writing function

    cout << "\n***Testing equalFirstLast***"<< endl;
    answer = equalFirstLast(array1, SIZE1); // uncomment after writing function
    cout << "equalFirstLast1 should be false: " << answer << endl;
    answer = equalFirstLast(array2, SIZE2); // uncomment after writing function
    cout << "equalFirstLast2 should be true: " << answer << endl;
    answer = equalFirstLast(array3, SIZE3); // uncomment after writing function
    cout << "equalFirstLast3 should be true: " << answer << endl;

    cout << "\n***Testing squareArray***" << endl;
    squareArray(array1, SIZE1); // uncomment after writing function
    cout << "squareArray1 should print 1 4 9: ";
    printArray(array1, SIZE1); // uncomment after writing function
    const int A5 = 5, A6 = 6, A8 = 8, A9 = 9;
    int array4[] = {A3, A5, A6, A8, A9};
    const int SIZE4 = 5;
    squareArray(array4, SIZE4); // uncomment after writing function
    cout << "squareArray2 should print 9 25 36 64 81: ";
    printArray(array4, SIZE4); // uncomment after writing function
    squareArray(array3, SIZE3); // uncomment after writing function
    cout << "squareArray3 should print 9: ";
    printArray(array3, SIZE3); // uncomment after writing function

    cout << "\n*** End of Tests ***" << endl;

    return 0;
}
/*
Given two temperatures, return true if one is less than 0
    and the other is greater than 100.
*/


bool icyHot(int temp1, int temp2) {
    if ( temp1 <0 && temp2>100) {
        return true;
    } else if( temp1 >100 && temp2<0) {
        return true;
    } else {
        return false;
    }
}
/*
 Given a char, uses ASCII to determine if it is a number.
    @param num The character to test.
    @returns true if num is a number (0-9); otherwise returns false.
*/

bool isNumber(char num) {

    if (num=='0') {
        return true;
    } else if(num=='1') {
        return true;
    } else if(num=='2') {
        return true;
    } else if(num=='3') {
        return true;
    } else if(num=='4') {
        return true;
    } else if(num=='5') {
        return true;
    } else if(num=='6') {
        return true;
    } else if(num=='7') {
        return true;
    } else if(num=='8') {
        return true;
    } else if(num=='9') {
        return true;
    } else if(num=='0') {
        return true;
    } else {
        return false;
    }
}


/*
 Given a string, converts any number in the string to a '+'
*/
void plusOut(string& str) {

    int length= str.length();
    for( int i=0; i<length; i++) {
        if(str[i]== '1') {

            str[i]='+';
        } else if(str[i]== '2') {

            str[i]='+';
        } else if(str[i]== '3') {

            str[i]='+';
        } else if(str[i]== '4') {

            str[i]='+';
        } else if(str[i]== '5') {

            str[i]='+';
        } else if(str[i]== '6') {

            str[i]='+';
        } else if(str[i]== '7') {

            str[i]='+';
        } else if(str[i]== '8') {

            str[i]='+';
        } else if(str[i]== '9') {

            str[i]='+';
        } else if(str[i]== '0') {

            str[i]='+';
        }
    }
}

/*
     Given a string, capitalizes all letters in the string using ASCII codes
    and if statements. Do NOT use toupper() or similar string functions.
    @param str The string to convert, which is returned by reference.
*/
void capitalizeString(string& str) {

    int length=str.length();
    for( int n=0; n<length; n++) {
        if(str[n]=='a') {
            str[n]='A';
        } else if(str[n]=='b') {
            str[n]='B';
        } else if(str[n]=='c') {
            str[n]='C';
        } else if(str[n]=='d') {
            str[n]='D';
        } else if(str[n]=='e') {
            str[n]='E';
        } else if(str[n]=='f') {
            str[n]='F';
        } else if(str[n]=='g') {
            str[n]='G';
        } else if(str[n]=='h') {
            str[n]='h';
        } else if(str[n]=='i') {
            str[n]='I';
        } else if(str[n]=='j') {
            str[n]='J';
        } else if(str[n]=='k') {
            str[n]='K';
        } else if(str[n]=='l') {
            str[n]='L';
        } else if(str[n]=='m') {
            str[n]='M';
        } else if(str[n]=='n') {
            str[n]='N';
        } else if(str[n]=='o') {
            str[n]='O';
        } else if(str[n]=='p') {
            str[n]='P';
        } else if(str[n]=='q') {
            str[n]='Q';
        } else if(str[n]=='r') {
            str[n]='R';
        } else if(str[n]=='s') {
            str[n]='S';
        } else if(str[n]=='t') {
            str[n]='T';
        } else if(str[n]=='u') {
            str[n]='U';
        } else if(str[n]=='v') {
            str[n]='V';
        } else if(str[n]=='w') {
            str[n]='W';
        } else if(str[n]=='x') {
            str[n]='X';
        } else if(str[n]=='y') {
            str[n]='Y';
        } else if(str[n]=='z') {
            str[n]='Z';
        }
    }
}


/**
    Prints the contents of an array with a for loop all on one line with a
    space between each number. Ends by printing a newline.
    @param data The array to print.
    @param size The number of elements in the array.
    @see lesson 8.1.4
*/
void printArray(const int data[], int size) {


    for(int q=0; q<size; q++) {


        cout<<data[q]<<" ";
    }
}



/**
    Given an array of ints, return true if the array is size 1 or more,
    AND the first element and the last element are equal.
    @param array An array of int numbers.
    @param size The number of elements in the array.

    Test cases:
    equalFirstLast([1, 2, 3], 3) ? false
    equalFirstLast([1, 2, 3, 1], 4) ? true
    equalFirstLast([1, 2, 1], 3) ? true
    equalFirstLast([3], 1) ? true
*/
bool equalFirstLast(int array[], int size) {


    int last =size-1;
    if ( size >= 1 && array[0] ==  array[last]) {
        return true;
    } else {
        return false;
    }

}


/**
    Given an array of ints, multiplies each element in the array by itself.
    Remember that arrays are automatically pass by reference
    @param array An array of int numbers.
    @param size The number of elements in the array.

    Test cases:
    squareArray([1, 2, 3], 3) -> [1, 4, 9]
    squareArraysquareArray([3, 5, 6, 8, 9], 5) -> [9, 25, 36, 64, 81]
    squareArray([3], 1) -> [9]
*/


void squareArray(int array[], int size) {


    for(int f=0; f<size; f++) {

        array[f]= array[f]* array[f];
    }
}