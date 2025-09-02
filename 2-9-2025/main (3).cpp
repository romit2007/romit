#include <iostream>
using namespace std;

int main() 
{
    float PI=3.14;
    int radious;
    
    cout <<"Enter radious: ";
    cin  >> radious;
    
     float ans = PI*radious*radious;
      cout << "Area of circle is: " << ans << endl;

    return 0;
}
