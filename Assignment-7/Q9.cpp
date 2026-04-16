#include<iostream>
using namespace std;

class Data
{
    int sum;

public:
    Data()
    {
        sum = 0;
    }

    void operator()(int a, int b, int c)
    {
        sum = a + b + c;
        cout << "Sum = " << sum << endl;
    }
};

int main()
{
    Data obj;

    obj(10, 20, 30);

    return 0;
}