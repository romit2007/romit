#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    ineligible:
    cout<<"\n Your arenot eligible to vote";
    
    cout<<"\n Enter age";
    int age;
    cin>>age;
    
    if(age<18)
    {
        goto ineligible;
    }
    else
    {
        cout<<"\n Eligible to vote";
    }
    
    
    
    return 0;
}