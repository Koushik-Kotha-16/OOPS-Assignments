#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public:
    double area(double base, double height)
    {
        return 0.5 * base * height;
    }

    double area(double side)
    {
        return (sqrt(3) / 4) * side * side;
    }

    double area(double a, double b, double c)
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main()
{
    Triangle t;
    double b, h, s, a, c;

    cin >> b >> h;
    cout << "Right Angle Triangle Area = " << t.area(b, h) << endl;

    cin >> s;
    cout << "Equilateral Triangle Area = " << t.area(s) << endl;

    cin >> a >> b >> c;
    cout << "Isosceles Triangle Area = " << t.area(a, b, c) << endl;

    return 0;
}
