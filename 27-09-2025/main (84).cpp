#include<iostream>
using namespace std;
int main()
{
    int marks[5],i;
    int sum=0;
    float avg=0;
    
    for(i=1;i<=5;i++)
    {
        cout<<"Enter marks";
        cin>>marks[i];
    }
    
     for(i=1;i<=5;i++)
    {
        sum+=marks[i];
        
    }
    avg=sum/5;
    
    cout<<"Result : "<<avg<<endl;
    
    
    
    
}