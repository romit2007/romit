#include <iostream>
using namespace std;

class student
{
    string name;
    string surname;
    string email;
    string password;
    
    public:
    
    student (string n,string s,string e,string p="1234")
    {
        name=n;
        surname=s;
        email=e;
        password=p;
    }
    
     void display() 
     {
        cout << "Name     : " << name << endl;
        cout << "Surname  : " << surname << endl;
        cout << "Email    : " << email << endl;
        cout << "Password : " << password << endl;
    }
};

int main()
{
   string name,surname,email,password;
   
    cout << "Enter Name: ";
    cin >> name;
    
    cout << "Enter Surname: ";
    cin >> surname;
    
    cout << "Enter Email: ";
    cin >> email;

    cout << "Enter password: ";
    cin >> password;
    
     student s1;
  
    
    
    
    s1.n = name;
    s1.s=surname;
    s1.e=email;
    s1.p=password;
    
       if(password=="1234")
    {
        s1.display();
    }
    else
    {
        cout<<"Invalid credentials";
    }
    
    
    
   
    return 0;
}