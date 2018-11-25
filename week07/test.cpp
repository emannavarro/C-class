/**
    CS-11 Asn 7, test.cpp
    Purpose: test arrays

    @author Emanuel Navarro
    @version 10/15/18
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int s[] = { 90, 95, 97, 89, 98, 96, 85, 79, 95, 100 };
    for (unsigned i = 0; i <9; i++)
    {
        if(s[i] <=90)
        {
            cout<<s[i] << endl;
        }

    }


    return 0;
}
