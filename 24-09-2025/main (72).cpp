
#include <iostream>
using namespace std;

class A
{
    protected:
    int a;
    
    public:
    void get_a(int n)
    {
        a = n;
    }
};
class B
{
    protected:
    int b;
    
    public:
    void get_b(int n)
    {
        b = n;
    }
};
    
    
 class C:public A,public B
{
    public:
    void display()
    {
        cout<<"The value of A: "<<a<<endl;
        cout<<"The value of B: "<<b<<endl;
        cout<<"Addition of c: "<<a+b;
    }
};

int main()
{
    
    C c;
    c.get_a(10);
    c.get_b(20);
    c.display();
    return 0;
}