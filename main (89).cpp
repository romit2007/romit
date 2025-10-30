#include <iostream>
using namespace std;

class student
{
    string name;
    string surname;
    string email;
    string password;

public:
    
    student(string n, string s, string e, string p = "1234")
    {
        name = n;
        surname = s;
        email = e;
        password = p;
    }

    
    void display()
    {
        cout << "Name     : " << name << endl;
        cout << "Surname  : " << surname << endl;
        cout << "Email    : " << email << endl;
        cout << "Password : " << password << endl;
    }

    // Function to check password
    bool checkPassword()
    {
        return password == "1234";
    }
};

int main()
{
    string name, surname, email, password;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Surname: ";
    cin >> surname;

    cout << "Enter Email: ";
    cin >> email;

    cout << "Enter Password: ";
    cin >> password;

    
    student s1(name, surname, email, password);


    if (s1.checkPassword())
    {
        s1.display();
    }
    else
    {
        cout << "Invalid credentials" << endl;
    }

    return 0;
}