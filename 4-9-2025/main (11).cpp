

#include <iostream>
using namespace std;
int main()
{
    int num1,num2,multi,op;
    
    cout<<"Enter num1: ";
    cin>>num1;
    
    cout<<"Enter num2: ";
    cin>>num2;

    cout<<"\n press1 for * \n press2 for + \n press3 for -  \n press4 for / \n press5 for %";
    cout<<"\n Enter choice: ";
    cin>>op;
    
    switch(op)
    {
       case 1: cout<<"Multiplication: "<<num1*num2<<endl;
       break;
       
        case 2: cout<<"addition: "<<num1+num2<<endl;
       break;
       
        case 3: cout<<"substrction: "<<num1-num2<<endl;
       break;
       
       case 4: cout<<"division: "<<num1/num2<<endl;
       break;
       
       case 5: cout<<"modulous: "<<num1%num2<<endl;
       break;
       
       default : cout<<"Invalid choice"<<endl;
       break;
       
       
    }
    
}