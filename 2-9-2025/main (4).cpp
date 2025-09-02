#include <iostream>
using namespace std;

int main() 
{
    int a,b;
    
    cout << "Enter a: ";
    cin  >> a;
    
    cout << "Enter b: ";
    cin  >> b;
    
    a+=b;
    cout << a << endl;
    
    a-=b;
    cout << a << endl;

    return 0;
}
