/**
    CS-11 Asn password, password.cpp
    Purpose: makes better passwords
    @author Emanuel Navarro
    @version 10/15/18
*/
#include <iostream>
#include<string>
using namespace std;
/**
    Removes spaces and substitutes characters to create a password from str.
    @param str The input phrase, which may contain spaces.
    @return an enhanced password
*/
string makePassword(string password)
{

    int length=password.length();

    for(int i=0; i<length; i++)
    {
        if(password[i]==' ')
        {
            for (int j = i; j < length; j++)
            {
                password[j] = password[j+1];
            }
        }
    }
    for (int n=0; n<length; n++)
    {
        if(password[n]== 'a')
        {
            password[n]='@';
        }
        else if(password[n]== 'A')
        {
            password[n]='@';
        }
        else if(password[n]=='e')
        {
            password[n]='3';
        }
        else if(password[n]=='E')
        {
            password[n]='3';
        }
        else if(password[n]=='O')
        {
            password[n]='0';
        }
        else if(password[n]=='o')
        {
            password[n]='0';
        }
        else if(password[n]=='I')
        {
            password[n]='!';
        }
        else if(password[n]=='i')
        {
            password[n]='!';
        }
        else if(password[n]=='U')
        {
            password[n]='^';
        }
        else if(password[n]=='u')
        {
            password[n]='^';
        }
    }

    return password;
}

int main()
{

    string str;
    cout <<"Enter a passphrase: ";
    getline(cin,str);
    cout<<"Enhanced password: " <<makePassword(str);



    return 0;
}
