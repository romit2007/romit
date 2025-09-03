#include<iostream>
using namespace std;
int main()
{
    int previous,current,consumed;
    float total;

    cout<<"\n Initail & final readings: ";
    cin>>previous>>current;
    consumed = current-previous;

    if(consumed>=200 && consumed<=500)
    {
        total=consumed*3.50;
    }
    else if(consumed>=100 && consumed<=199)
    {
        total=consumed*2.50;
    }
    else if(consumed<100)
    {
        total=consumed*1.50;
    }
    cout<<"\n total no of units consumed "<< consumed;
    cout<<"\n Electric bill for units"<< consumed << "is" <<total;
        
    
}