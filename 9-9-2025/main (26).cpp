
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
    
    s1.id=101;
    s1.name="Romit";
    
    cout<<"Id : "<<s1.id<<endl;
    cout<<"name : "<<s1.name<<endl;

    return 0;
}