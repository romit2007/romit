#include<iostream>
#include<cstring>
using namespace std;
int main()
{
     char name[100];
    char name2[200];
    
    cout<<"Enter Your Name";
    cin>>name;
    
    strcpy(name2,name);
    
    cout<<name2<<endl;

    return 0;
}