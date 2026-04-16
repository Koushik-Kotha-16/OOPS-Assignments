#include<iostream>
using namespace std;

class Test
{
    float x;

public:
    Test(float a)
    {
        x = a;
    }

    operator float()
    {
        return x;
    }
};

int main()
{
    Test t(7.25);

    float num;

    num = t;  

    cout << "Value = " << num;

    return 0;
}