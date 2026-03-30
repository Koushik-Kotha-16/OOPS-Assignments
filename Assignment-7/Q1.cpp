#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void set_value(int w, int h)
    {
        width = w;
        height = h;
    }

    virtual int calculate_area()
    {
        return 0;
    }
};

class Rectangle : public Polygon
{
public:
    int calculate_area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    int calculate_area()
    {
        return (width * height) / 2;
    }
};

int main()
{
    Polygon *p;
    Rectangle r;
    Triangle t;

    r.set_value(10, 5);
    t.set_value(10, 5);

    p = &r;
    cout << "Area of Rectangle = " << p->calculate_area() << endl;

    p = &t;
    cout << "Area of Triangle = " << p->calculate_area() << endl;

    return 0;
}
