
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
class C : public A
{
    public:
    void c()
    {
        cout<<"C called"<<endl;
    }
    
};
class D : public B,public C
{
    public:
    void d()
    {
        cout<<"D called"<<endl;
    }
    
};
int main()
{
    
    D d;

    d.a();
    d.b();
    d.c();
    d.d();

    return 0;
}