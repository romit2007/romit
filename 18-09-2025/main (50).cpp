
#include <iostream>
using namespace std;

class RBI
{
    public:
    virtual int rate()
    {
        return 0;
    }
};
class kotak : public RBI
{
    public:
     int rate()
    {
        return 6;
    }
};
class yash :public RBI
{
    public:
    int rate()
    {
        return 7;
    }
};
class axis : public RBI
{
    public:
    virtual int rate()
    {
        return 0;
    }
};
int main()
{
    RBI *r;
    
    kotak k;
    yash  y;
    axis a;
    
    r = &k;
    cout << r->rate();
    r = &y;
    cout << r->rate();
    r = &a;
    cout << r->rate();
   

    return 0;
}