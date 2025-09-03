#include<iostream>
using namespace std;
int main()
{
    float per;
    cout<<"\n Enter the perchantage: ";
    cin>>per;

    if(per>=90 && per<=100)
    {
        cout<<"\n distinction";
    }
    else if(per>=70 && per<=90)
    {
        cout<<"\n First class";
    }
    else if(per>=70 && per<=50)
    {
        cout<<"\n Second class";
    }
    else 
    {
        cout<<"\n Fail";
    }

    return 0;
}