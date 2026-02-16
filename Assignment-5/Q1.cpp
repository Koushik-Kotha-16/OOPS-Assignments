#include <iostream>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(string n) {
        name = n;
    }

    void displayAnimal() {
        cout << "Animal Name: " << name << endl;
    }
};

class Dog : public Animal {
private:
    string breed;

public:
    Dog(string n, string b) : Animal(n) {
        breed = b;
    }

    void displayDog() {
        displayAnimal(); 
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Animal a1("Generic Animal");
    a1.displayAnimal();

    cout << endl;

    Dog d1("Buddy", "Golden Retriever");
    d1.displayDog();

    return 0;
}
