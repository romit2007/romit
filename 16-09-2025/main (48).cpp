#include<iostream>
using namespace std;

class Count
{
    public:
    int cal(int a,int b)
    {
        return a+b;
    }
    double cal(double c,double d)
    {
        return c*d;
    }
    
};

int main()
{
    Count c;
    cout<<c.cal(8,6)<<endl;
    cout<<c.cal(8.00,6.00)<<endl;

    return 0;
}