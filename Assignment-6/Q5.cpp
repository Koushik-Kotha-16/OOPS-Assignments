#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex(const Complex &c)
    {
        real = c.real;
        imag = c.imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2)
{
    int r = c1.real + c2.real;
    int i = c1.imag + c2.imag;

    cout << "Sum = " << r << " + " << i << "i";
}

int main()
{
    Complex c1(3,4);
    Complex c2(5,6);

    Complex c3 = c1;   // copy constructor

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    sum(c1,c2);

    return 0;
}
