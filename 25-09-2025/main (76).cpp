
#include <iostream>
using namespace std;
int main()
{
    int num1;
    float num2;
    
    cout<<"Enter num1";
    cin>>num1;
    
    cout<<"Enter num2";
    cin>>num2;
    
    float result=num1+num2;
    cout<<"Answer: "<<result<<endl;
    
    num1=(int)num2;
    
    cout<<"Original number: "<<num2<<endl;
    cout<<"exclipt number:  "<<num1<<endl;
    
    
    

    return 0;
}