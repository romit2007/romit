#include<iostream>
using namespace std;

int cal(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    
    cout<<"\n Enter a";
    cin>>a;
    
    cout<<"\n Enter b";
    cin>>b;
    
    cout<<"Addition is : "<<cal(a,b);
    
    return 0;
}