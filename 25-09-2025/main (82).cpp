#include<iostream>
using namespace std;
float add(float a,float b)
{
    return a+b;
    
}
float multi(float a,float b)
{
    return a*b;
    
}
float sub(float a,float b)
{
    return a-b;
    
}
float divison(float a,float b)
{
    return a/b;
    
}
int main()
{
    int a,b,choice,result;
    
    cout<<"Enter a: ";
    cin>>a;
    
    cout<<"Enter b: ";
    cin>>b;
    
    cout<<"Enter choice: ";
    cin>>choice;
    
    switch(choice)
    {
        case 1: result=add(a,b);
        cout<<"result: "<<result<<endl;
        break;
        
        case 2: result=multi(a,b);
        cout<<"result: "<<result<<endl;
        break;
        
        case 3: result=sub(a,b);
        cout<<"result: "<<result<<endl;
        break;
        
       case 4: result=divison(a,b);
        cout<<"result: "<<result<<endl;
        break;
        
        default:
        cout<<"Invalid choice";
        break;
        
        
    }
    
    
}