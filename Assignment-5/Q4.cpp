// Single Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "This is class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "This is class B" << endl;
    }
};

int main() {
    B obj;
    obj.showA();
    obj.showB();
    return 0;
}

//Multiple Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}

//Heirarchial Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

int main() {
    B obj1;
    C obj2;

    obj1.showA();
    obj1.showB();

    obj2.showA();
    obj2.showC();

    return 0;
}

//Multilevel Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public B {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}

//Hybrid Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;

    obj.B::showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}
