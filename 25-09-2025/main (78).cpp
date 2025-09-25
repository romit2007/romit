
#include <iostream>
using namespace std;
int main()
{
    
    int marks[5],i,total=0;
    float avg;
    
    for(i=0;i<5;i++)
    {
        cout<<"Enter marks: ";
        cin>>marks[i];
    }
    
     for(i=0;i<5;i++)
    {
        total+=marks[i];
        
    }
    
    
    avg=total/5;
    
    if(avg>=90)
    {
        cout<<"A grade";
    }
      
    else if(avg>=70)
    {
        cout<<"B grade";
    }
      
    else if(avg>=33)
    {
        cout<<"C grade";
    }
      
    else
    {
        cout<<"Fail";
    }
    
}    
    
    