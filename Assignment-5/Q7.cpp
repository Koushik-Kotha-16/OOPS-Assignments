#include <iostream>
using namespace std;

class Speedometer {
protected:
    int speed;

public:
    Speedometer(int s = 0) {
        speed = s;
    }

    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class FuelGauge {
protected:
    int fuelLevel;

public:
    FuelGauge(int f = 0) {
        fuelLevel = f;
    }

    void showFuel() {
        cout << "Fuel Level: " << fuelLevel << "%" << endl;
    }
};

class Thermometer {
protected:
    int temperature;

public:
    Thermometer(int t = 0) {
        temperature = t;
    }

    void showTemperature() {
        cout << "Engine Temperature: " << temperature << " °C" << endl;
    }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    CarDashboard(int s, int f, int t)
        : Speedometer(s), FuelGauge(f), Thermometer(t) {}

    void displayDashboard() {
        cout << "----- Car Dashboard -----" << endl;
        showSpeed();
        showFuel();
        showTemperature();
    }
};

int main() {
    CarDashboard car(80, 60, 95);
    car.displayDashboard();
    return 0;
}
