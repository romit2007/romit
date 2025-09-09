
#include <iostream>
using namespace std;

class student
{
    public:
    int id;
    string name;
};
int main()
{
    student s1;
    student s2;
    
    s1.id=101;
    s1.name="Romit";
    
    s2.id=102;
    s2.name="poojan";
    
    cout<<"Id : "<<s1.id<<endl;
    
    cout<<"name : "<<s1.name<<endl;
    
    cout<<"Id : "<<s2.id<<endl;
    
    cout<<"name : "<<s2.name<<endl;

    return 0;
}