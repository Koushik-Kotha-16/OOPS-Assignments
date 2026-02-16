#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string mk, string md, int yr) {
        make = mk;
        model = md;
        year = yr;
    }

    void showVehicle() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Truck : public Vehicle {
protected:
    int load_capacity;

public:
    Truck(string mk, string md, int yr, int lc)
        : Vehicle(mk, md, yr) {
        load_capacity = lc;
    }

    void showTruck() {
        showVehicle();
        cout << "Load Capacity: " << load_capacity << " kg" << endl;
    }
};

class RefrigeratedTruck : public Truck {
private:
    int temperature_control;

public:
    RefrigeratedTruck(string mk, string md, int yr, int lc, int tc)
        : Truck(mk, md, yr, lc) {
        temperature_control = tc;
    }

    void showRefrigeratedTruck() {
        showTruck();
        cout << "Temperature Control: " << temperature_control << " C" << endl;
    }
};

int main() {
    RefrigeratedTruck rt("Volvo", "FH16", 2022, 20000, -5);
    rt.showRefrigeratedTruck();
    return 0;
}
