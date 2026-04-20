#include<iostream>
using namespace std;

template <class T1, class T2>
class Pair
{
    T1 a;
    T2 b;

public:
    Pair(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "First value: " << a << endl;
        cout << "Second value: " << b << endl;
    }
};

int main()
{
    Pair<int, float> p1(10, 5.5);
    p1.show();

    Pair<char, int> p2('A', 100);
    p2.show();

    return 0;
}