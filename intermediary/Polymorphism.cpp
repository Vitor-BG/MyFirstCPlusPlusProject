#include <iostream>
#include <string>

using namespace std;

// Base Class (parent)
class Vehicle {
public:
    string brand;
    string model;
    int year;

    void honk() {
        cout << "Beep beep!" << endl;
    }

    // Virtual method who will be overrided. When you want a class to be overrided if needed you declare it as virtual
    virtual void displayInfo() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

// Class Derivada (child)
class Car : public Vehicle {
public:
    int numberOfDoors;

    // Overrides the parent's method displayInfo. When you want to overried a class you can write override after the class
    void displayInfo() const override {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Doors: " << numberOfDoors << endl;
    }
};

// Another Derived Class (child)
class Motorcycle : public Vehicle {
public:
    bool hasSidecar;

    // Overrides the parent's method displayInfo
    void displayInfo() const override {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Sidecar: " << (hasSidecar ? "Yes" : "No") << endl;
    }
};

// Function to call the overrided class
void showVehicleInfo(const Vehicle &v) {
    v.displayInfo();
}

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car1.numberOfDoors = 4;

    Motorcycle moto1;
    moto1.brand = "Harley-Davidson";
    moto1.model = "Sportster";
    moto1.year = 2021;
    moto1.hasSidecar = false;

    car1.honk();
    moto1.honk();

    // OBS you can directly call the overrided method if you want, this was done only to show you can do it this way too
    showVehicleInfo(car1);
    showVehicleInfo(moto1);

    return 0;
}
