#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"\n Enter alphabet: ";
    cin>>c;

    if(c>=65 && c<=90)
    {
        cout<<"\n upper case";
    }
    if(c>=97 && c<=122)
    {
        cout<<"\n lower case";
    }
    if(c>=48 && c<=57)
    {
        cout<<"\n invalid number";
    }
}