#include <iostream>
using namespace std;


class Shape 
{
public:
    void display() 
    {
        cout << "Shape" << endl;
    }
};


class Triangle : public Shape
{

    float base, height;
    public:
    void TriangleData(float b, float h) 
    {
        base = b;
        height = h;
    }
    float areaTriangle()
    {
        return 0.5 * base * height;
    }
};


class Rectangle : public Triangle 
{

    float length, breadth;
    public:
    void RectangleData(float l, float b) 
    {
        length = l;
        breadth = b;
    }
    float areaRectangle() 
    {
        return length * breadth;
    }
};


int main() 
{
    Rectangle r;

    r.display();   

    r.TriangleData(12,5);
    cout << "Area of Triangle = " << r.areaTriangle() << endl;

    r.RectangleData(12,5);
    cout << "Area of Rectangle = " << r.areaRectangle() << endl;

    return 0;
}
