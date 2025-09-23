
#include <iostream>
using namespace std;
void cal(int a,int b);

//with para without return type
void cal(int a,int b)
{
    int c= a+b;
    cout<<c<<endl;
}

int main()
{
     int a,b;
    
    cout<<"Enter a";
    cin>>a;
    
     cout<<"Enter b";
    cin>>b;
    
    cal(a,b);
    

    return 0;
}