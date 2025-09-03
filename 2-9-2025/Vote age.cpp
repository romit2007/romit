#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"\n Enter age: ";
    cin>>age;

    if(age>=18)
    {
        cout<<"\n eligible for voting ";
    }
    else
    {
        cout<<"you arenot eligible for vote";
        cout<<"Wait for"<<18-age<<"year(s).";
    }

}
