#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[50];
    char surname[50];
    
    cout<<"Enter  Name";
    cin>>name;
    
    cout<<"Enter Surname";
    cin>>surname;
    
    cout<<strcat(name,surname)<<endl;
    
    
    

    return 0;
}