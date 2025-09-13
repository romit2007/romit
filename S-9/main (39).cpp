
#include <iostream>
using namespace std;

class triangle
{
    float base,height;
    public:
    void triangledata(float b,float h)
    {
        base=b;
        height=h;
    }
    float areaoftriangle()
    {
        return 0.5*base*height;
    }
};

class rectangle
{
    float length,breadth;
    public:
    void rectangledata(float l,float b)
    {
        length=l;
        breadth=b;
    }
    float areaofrectangle()
    {
        return length*breadth;
    }
};

class shape : public triangle,public rectangle
{
public:
    void displayAreas() {
        cout << "Area of Triangle = " << areaoftriangle() << endl;
        cout << "Area of Rectangle = " << areaofrectangle() << endl;
    }
};

int main()
{
    shape s;
    
    s.triangledata(12,5);
    s.rectangledata(12,5);

    s.displayAreas();
    return 0;
}