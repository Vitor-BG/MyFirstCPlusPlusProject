#include <iostream>
#include <string>
using namespace std;

class Car {
    //For private class methods and variables
    private:
    string brand;
    string model;
    int year;

    //For public class methods and variables
    public: 

    //Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }
    
    // Personalized Method
    void showInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    // Setter
    void setYear(int ReceivedYear) {
        year = ReceivedYear;
    }

    // Getter
    int getYear() const { 
        return year;
    }
};


// Test method.
void testPrint(string msg){
    cout << "This is a test method to print: " << msg << ".";
}

int main() {
    Car car1("Toyota", "Corolla", 2020);
    car1.showInfo();

    int anoCar1 = car1.getYear();
    cout << "Car 1 Year: " << anoCar1 << endl;

    car1.setYear(2022);
    car1.showInfo();

    cout << "Write a message for the test: ";
    string msg;
    cin >> msg;
    testPrint(msg);
    return 0;
}