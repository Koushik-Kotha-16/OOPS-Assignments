#include<iostream>
#include<cmath>
using namespace std;

class Polar
{
public:
    float r, angle;

    Polar(float rr, float a)
    {
        r = rr;
        angle = a;
    }
};

class Cartesian
{
    float x, y;

public:
    Cartesian(Polar p)
    {
        x = p.r * cos(p.angle);
        y = p.r * sin(p.angle);
    }

    void show()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main()
{
    Polar p(10, 0.5);

    Cartesian c = p;  

    c.show();

    return 0;
}