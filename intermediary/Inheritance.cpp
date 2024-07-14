#include <iostream>
#include <string>

using namespace std;

// Base Class (parent)
class Vehicle {
public:
    // Every vehicles has a brand, model and year so it's declared in the parent class
    string brand;
    string model;
    int year;

    //Every vehicle can honk so it's in the parent class
    void honk() {
        cout << "Beep beep!" << endl;
    }
};

// Derivated Class (child)
class Car : public Vehicle {
public:
    /*
        Depending of the vehicle, or car it can have more or less than 4 doors, so it is declared in the child class. 
        But to declare the child class you'll also need to fullfill the parent requirements (brand, model, year).
        Every child class have access to the parent's methods in this case HONK.
    */ 
    int numberOfDoors;

    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Doors: " << numberOfDoors << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car1.numberOfDoors = 4;

    car1.honk();
    car1.displayInfo();

    return 0;
}
