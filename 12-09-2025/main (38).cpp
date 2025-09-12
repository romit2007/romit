
#include <iostream>
using namespace std;

class Tops
{
    public:
    Tops()
    {
        cout<<"Constructer called"<<endl;
    }
};
int main()
{
    Tops t1=Tops();

    return 0;
}