#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    
    student(int i,string n)
    {
        id=i;
        name=n;
    }
    
    void display()
    {
        cout<<"id  "<<id<<endl;
        cout<<"name "<<name<<endl;
    }
    
};

int main()
{
    student s1=student(101,"Romit");
    student s2=student(201,"Poojan");
    student s3=student(301,"Jay");
    
    s1.display();
    s2.display();
    s3.display();
}