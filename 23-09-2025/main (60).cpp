#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[100];
    char name2[100];
    
    cout<<"Enter name: "<<endl;
    cin>>name;
    
    cout<<"Enter name2: "<<endl;
    cin>>name2;
    
    strcpy(name2,name);
    
    cout<<name2<<endl;

    return 0;
}