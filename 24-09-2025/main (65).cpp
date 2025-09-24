
#include <iostream>
using namespace std;
class student
{
    public:
    int id=0;
    string name="";
    
    student(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    
    void display()
    {
        cout<<"Your id is: "<<id<<endl;
        cout<<"Your name is: "<<name<<endl;
        
    }
};
int main()
{
  
  student s1=student(101,"Romit");
  student s2=student(201,"poojan");
  student s3=student(301,"jay");
  
  
    s1.display();
    s2.display();
    s3.display();

  

    return 0;
}