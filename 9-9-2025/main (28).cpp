#include <iostream>
using namespace std;


class Student
{
    
    public:
    int id;
    string name;
    string surname;
    string email;
    string password;
    
    
   
    void display()
    {
        cout<<"Your id is : "<<id<<endl;
        cout<<"Your Name is: "<<name<<endl;
        cout<<"Your Surname is: "<<surname<<endl;
        cout<<"Your Email is: "<<email<<endl;
        cout<<"Your Password is: "<<password<<endl;
    }
    
};

int main()
{
    
    Student s1;
    Student s2;
    
    
    s1.id = 101;
    s1.name = "romit";
    s1.surname="vaghela";
    s1.email="rmv@gmail.com";
    s1.password="1234";
    
    s2.id = 102;
    s2.name = "poojan";
    s2.surname="govani";
    s2.email="pdg@gmail.com";
    s2.password="9897";
    
    
    s1.display();
    s2.display();
    
  
   

    return 0;
}