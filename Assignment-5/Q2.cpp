#include <iostream>
using namespace std;

class Base {
protected:
    int number;  

public:
    void setNumber(int n) {
        number = n;
    }
};

class Derived : public Base {
public:
    void displayNumber() {
        cout << "Number from Base class: " << number << endl;
    }
};

int main() {
    Derived obj;

    obj.setNumber(25);  
    obj.displayNumber();   

    return 0;
}
