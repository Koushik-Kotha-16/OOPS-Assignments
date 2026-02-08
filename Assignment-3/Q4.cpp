#include <iostream>
using namespace std;

class B;

class A {
    int data;
public:
    A() { data = 50; }
    friend class B;
};

class B {
public:
    void show(A a) {
        cout << "Accessing private data of A: " << a.data << endl;
    }
};

int main() {
    A a;
    B b;

    b.show(a);

    return 0;
}
