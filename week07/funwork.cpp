/**
    CS-11 Asn 7, funwork.cpp
    Purpose: Practice writing functions.

    @author Emanuel Navarro
    @version 10/13/18
*/
#include <iostream>
using namespace std;

/**
    Given two int values, return their return product unless one or more
    values are 0, then return their sum.
    @param a The first value to test.
    @param b The second value to test.
    @return product of the parameters unless one or both is 0, then return
    their sum.

    Test cases:
    product0Sum(1, 2) ? 2
    product0Sum(3, 2) ? 6
    product0Sum(0, 3) ? 3
*/
int product0Sum(int a, int b)
{
    int sum= a*b;
    if( a==0 || b==0 )
    {
        return a+b;
    }
    else if (a==0 && b==0)
    {
        return a+b;  // update the return statement
    }
    else
    {
        return sum;
    }
}

/**
    Given an int number, sum the numbers from 1 to number and return the sum.
    @param number The number to sum up to.
    @return the sum of numbers from 1 to number.

    Test cases:
    sumToNumber(1) ? 1
    sumToNumber(3) ? 6
    sumToNumber(5) ? 15
    Hint: see loopwork.cpp in assignment 6.
*/

int sumToNumber(int number)
{
    int lum=0;
    for (int e=1; e<= number; e++)
    {
        lum=lum+e;
    }
    return lum;  // update the return statement
}

/**
    Given 2 ints, a and b, return true if one of them is 12 or if their sum
    is 12; otherwise return false.
    @param a The first value to test.
    @param b The second value to test.
    @return true if a parameter is 12 or if their sum is 12; otherwise false.

    Test cases:
    makes12(9, 12) ? true
    makes12(9, 10) ? false
    makes12(1, 11) ? true
*/
bool makes12(int a, int b)
{
    if( a==12 || b==12)
    {
        return true;
    }
    else if( a + b==12)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
    Return true if the given non-negative number is a multiple of 5 or a
    multiple of 7. Use the % "modulus" operator.
    @param num The value to test.

    Test cases:
    or57(7) ? true
    or57(10) ? true
    or57(8) ? false
*/
bool or57(int num)
{
    if( num%7==0)
    {
        return true;
    }
    else if(num%5==0)
    {
        return true;
    }
    else
    {
        return false; // update the return statement
    }
}

/**
    Test if the first or last letter of a word is earlier in the alphabet.
    Return the earliest letter as a char.
    @param str The string to modify.
    @return the earliest letter as a char.

    Test cases:
    firstLast("easy") ? 'e'
    firstLast("x") ? 'x'
    firstLast("zebra") ? 'a'
    Hint: see assignment 4.
*/
char firstLast(string word)
{

    if(word.substr(0,1)< word.substr(word.length()-1))
    {
        return word[0];  // update the return statement
    }
    else if(word.substr(0,1)> word.substr(word.length()-1))
    {
        return word[word.length()-1];
    }
    else
    {
        return word[0];
    }

}

// Do not change any code in the main function.
int main()
{
    // TV = Test Value to avoid magic numbers
    const int TV3 = 3, TV5 = 5, TV7 = 7, TV8 = 8, TV9 = 9;
    const int TV10 = 10, TV11 = 11, TV12 = 12;
    int result;
    bool answer;
    string value;
    cout << boolalpha;

    cout << "*** Testing product0Sum ***"<< endl;
    result = product0Sum(1, 2);
    cout << "product0Sum1(1, 2) should be 2: " << result << endl;
    result = product0Sum(TV3, 2);
    cout << "product0Sum2(3, 2) should be 6: " << result <<endl;
    result = product0Sum(0, TV3);
    cout << "product0Sum3(0, 3) should be 3: " << result << endl;

    cout << "\n*** Testing sumToNumber ***"<< endl;
    result = sumToNumber(1);
    cout << "sumToNumber1 should be 1: " << result << endl;
    result = sumToNumber(TV3);
    cout << "sumToNumber2 should be 6: " << result <<endl;
    result = sumToNumber(TV5);
    cout << "sumToNumber3 should be 15: " << result << endl;

    cout << "\n*** Testing makes12 ***"<< endl;
    answer = makes12(TV9, TV12);
    cout << "makes12a(9, 12) should be true: " << answer << endl;
    answer = makes12(TV9, TV10);
    cout << "makes12b(9, 10) should be false: " << answer << endl;
    answer = makes12(1, TV11);
    cout << "makes12c(1, 11) should be true: " << answer << endl;

    cout << "\n*** Testing or57 ***"<< endl;
    answer = or57(TV7);
    cout << "or57a(7) should be true: " << answer << endl;
    answer = or57(TV10);
    cout << "or57b(10) should be true: " << answer << endl;
    answer = or57(TV8);
    cout << "or57c(8) should be false: " << answer << endl;

    cout << "\n*** Testing firstLast ***"<< endl;
    value = firstLast("easy");
    cout << "firstLast1(\"easy\") should be 'e': " << value << endl;
    value = firstLast("x");
    cout << "firstLast2(\"x\") should be 'x': " << value << endl;
    value = firstLast("zebra");
    cout << "firstLast3(\"zebra\") should be 'a': " << value << endl;

    cout << "\n*** End of Tests ***" << endl;
    return 0;
}