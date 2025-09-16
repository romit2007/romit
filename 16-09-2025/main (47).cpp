
#include <iostream>
using namespace std;

class count
{
    public:
    int cal(int a,int b)
    {
        return a+b;
    }
    int cal(int c,int d)
    {
        return c*d;
    }
};
int main()
{
    count c = count();
    cout<<c.cal(6,5);
     cout<<c.cal(6,5);

    return 0;
}