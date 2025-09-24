
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
    
    student(const student &old)
    {
         id = old.id;
        name = old.name;

        cout << "Copy Constructor called!\n";
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
  student s2=student(s1);
  
  
    s1.display();
    s2.display();
    

  

    return 0;
}