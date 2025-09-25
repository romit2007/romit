
#include <iostream>
using namespace std;
int main()
{
    
    int num1,num2;
    
    cout<<"Enter num1: ";
    cin>>num1;
    
    cout<<"Enter num2: ";
    cin>>num2;
    
    int add=num1+num2;
    cout<<"Addition : "<<add<<endl;
    
    if(num1>=num2)
    {
        cout<<"Num1 big: "<<num1<<endl;
    }
    else
    {
        cout<<"Num2 big: "<<num2<<endl;
    }
    
    if(num1%5==0 && num2%5==0)
    {
        cout<<"Numbers are same"<<endl;
    }
    else
    {
        cout<<"Numbers are different"<<endl;
    }
    
    cout << "num1 ^ num2 = " << (num1 ^ num2) << endl; 

    return 0;
}