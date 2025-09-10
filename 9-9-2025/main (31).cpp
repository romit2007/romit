#include<iostream>
using namespace std;

class entry
{
    public:
    string name;
    int number;
    int ammount;
    int count;
    
    
    void display()
    {
      cout<<"Bank entry: "<<count<<endl;
      cin>>count;
      count++;
    }
};

int main()
{
    
    string name1;
    int  number1;
    int ammount1;
    int count1;
    int i;
    
    
    
         cout<<"Enter name1: ";
         cin>>name1;
         
         cout<<"Enter number1: ";
         cin>>name1;
         
         cout<<"Enter ammount1: ";
         cin>>ammount1;
        
    
    
    entry e1;
    
    e1.name=name1;
    e1.number=number1;
    e1.ammount=ammount1;
   
    e1.display();
    
}
    

