#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[100];
    char surname[100];
    
    cout<<"\n Enter name:";
    cin>>name;
    
    
    cout<<"\n Enter surname:";
    cin>>surname;
    
    cout<<strcat(name,surname)<<endl;

    return 0;
}