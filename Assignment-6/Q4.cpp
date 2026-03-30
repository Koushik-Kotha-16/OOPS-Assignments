#include <iostream>
using namespace std;

class B;

class A
{
private:
    int numA;

public:
    A(int x)
    {
        numA = x;
    }

    friend int add(A, B);
};

class B
{
private:
    int numB;

public:
    B(int y)
    {
        numB = y;
    }

    friend int add(A, B);
};

int add(A obj1, B obj2)
{
    return obj1.numA + obj2.numB;
}

int main()
{
    A a1(10);
    B b1(20);

    cout << "Sum = " << add(a1, b1);

    return 0;
}
