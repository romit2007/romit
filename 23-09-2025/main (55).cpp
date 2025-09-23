
#include <iostream>
using namespace std;
void cal(int a,int b);

//without para with return type
int cal()
{
    int a=9;
    int b=18;
    
    int c=a+b;
    
    return c;
}

int main()
{
    
    cout<<"The addition is:"<<cal();

    return 0;
}