
#include <iostream>
using namespace std;
void cal(int a,int b);

//without para without return type
void cal()
{
    int a=9;
    int b=18;
    
    int c=a+b;
    cout<<c;
}

int main()
{
    
    cal();

    return 0;
}