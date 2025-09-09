
#include <iostream>
using namespace std;

class student
{
    public:
    int id;
    string name;
    string surname;
    string email;
    string password;
    
    void display()
    {
        cout<<" id  : "<<id<<endl;
        cout<<" Name : "<<name<<endl;
        cout<<"Surname : "<<surname<<endl;
        cout<<"Email : "<<email<<endl;
        cout<<"Password : "<<password<<endl;
    }
};

int main()
{
    int id1;
    string name1;
    string surname1;
    string email1;
    string password1;
    
     cout<<"Enter Your Id";
    cin>>id1;
    cout<<"Enter Your Name";
    cin>>name1;
    cout<<"Enter Your Surname";
    cin>>surname1;
    cout<<"Enter Your Email";
    cin>>email1;
    cout<<"Enter Your Password";
    cin>>password1;
    
    student s1;
    
     s1.id = id1;
    s1.name = name1;
    s1.surname=surname1;
    s1.email=email1;
    s1.password=password1;
    
    s1.display();


    return 0;
}