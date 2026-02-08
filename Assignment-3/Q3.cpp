#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int val) { x = val; }
    friend int add(A, B);
};

class B {
    int y;
public:
    B(int val) { y = val; }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a(5);
    B b(7);

    cout << "Sum = " << add(a, b) << endl;

    return 0;
}
