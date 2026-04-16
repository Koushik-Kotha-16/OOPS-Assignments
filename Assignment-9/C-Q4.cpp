#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
    T a, b;

public:
    Arithmetic(T x, T y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void sub()
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void mul()
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void div()
    {
        if(b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division not possible\n";
    }
};

int main()
{
    Arithmetic<int> obj(10, 5);

    obj.add();
    obj.sub();
    obj.mul();
    obj.div();

    return 0;
}