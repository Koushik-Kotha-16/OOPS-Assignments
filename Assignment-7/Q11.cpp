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

    void show()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    float num = 5.75;

    Test t = num;   
    t.show();

    return 0;
}