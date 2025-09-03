#include<iostream>
using namespace std;

class Tops
{
    
    public:
    int id;
    string name;
    
    void display()
    {
        cout<<"Your id: "<<id<<endl;
        cout<<"Your name: "<<name<<endl;
        
    }
    
};
int main()
{   
    
    Tops t1 = Tops();
    
    t1.id=101;
    t1.name="romit";
    
    Tops t2 = Tops();
    
    t2.id=202;
    t2.name="tirth";
    
    Tops t3 = Tops();
    
    t3.id=303;
    t3.name="poojan";
    
    Tops t4 = Tops();
    
    t4.id=404;
    t4.name="ved";
    
    t1.display();
    t2.display();
    t3.display();
    t4.display();
    
   
    
    
    
    
    
    
    
     return 0;
}