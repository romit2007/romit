
#include <iostream>
using namespace std;

class A 
{
    public:
    void a()
    {
        cout<<"A called"<<endl;
    }
};
class B
{
    public:
    void b()
    {
        cout<<"B called"<<endl;
    }
    
};
class C : public A,public B
{
    public:
    void c()
    {
        cout<<"C called"<<endl;
    }
    
};

int main()
{
    
    C c;
    
    c.a();
    c.b();
    c.c();
    

    return 0;
}