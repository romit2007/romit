
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    
    cout<<"Enter n: ";
    cin>>n;
    
    if(n<0)
    {
        cout<<"Sorry i can't find factorial";
    }
    else
    {
        cout<<"Factorial of n:"<<factorial(n)<<endl;
    }

    return 0;
}