#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;

protected:
    int prot = 2;

private:
    int priv = 3;
};


class PublicDerived : public Base {
public:
    void show() {
        cout << "Public Derived:" << endl;
        cout << "Public member: " << pub << endl;    
        cout << "Protected member: " << prot << endl;  
    }
};

class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "Protected Derived:" << endl;
        cout << "Public member: " << pub << endl;      
        cout << "Protected member: " << prot << endl;  
    }
};

class PrivateDerived : private Base {
public:
    void show() {
        cout << "Private Derived:" << endl;
        cout << "Public member: " << pub << endl;     
        cout << "Protected member: " << prot << endl;
    }
};

int main() {
    PublicDerived pd;
    pd.show();
    cout << endl;

    ProtectedDerived prd;
    prd.show();
    cout << endl;

    PrivateDerived pvd;
    pvd.show();

    cout << "\nAccessing through PublicDerived object: " << pd.pub << endl;

    return 0;
}
