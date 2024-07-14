#include <iostream>
#include <string>

using namespace std;

/*
A method or variable can be:
    - public: Every other class and method have access to it.
    - private: Only the the class can access it in itself. Using the previous examples I could make a method to see the numbers of doors after creating a car. 
    Only the car method would be able to call it after creation.
    - protected: Similar to private but the derivated class can access it directly too.  
*/

class MyClass {
public:
    int publicVar;   

private:
    int privateVar;   

protected:
    int protectedVar;

};

/*
    Virtual is declared as a prefix of a method when you want it to be overridable
    To override a virtual method you can declare it like it doens't already exist and put a override in front of it
    OBS.: To be able to override a method it MUST be virtual and if it is owned by a class you MUST derive from this method.
*/

class Base {
public:
    virtual void displayInfo() {
        cout << "Base class info." << endl;
    }
};

class Derived : public Base {
public:
    void displayInfo() override {
        cout << "Derived class info." << endl;
    }
};

/*
    There are some prefixes that can be applied when declaring a variable or method:
    const: these variables cannot be changed after it is declared.
    final: final is often used on methodos to avoid overrides. When something is declared as final it cannot be overriden.
    Static: it's a variable that can be defined inside a class and always will be the same for all instances.
    Mutable: it a variable that can be modified after declaration even if it's in a const method.
*/

//Const
class MyClass {
public:
    const int constantValue = 10; 
    void printValue() const {       
        cout << constantValue << endl;
    }
};

//Final
class Base2 {
public:
    virtual void displayInfo() final {
        cout << "Base class info." << endl;
    }
};

class Derived2 : public Base {
public:
    // ERROR: You can't override a final method
    void displayInfo() override {
        cout << "Derived class info." << endl;
    }
};

//static
class MyClass {
public:
    static int count;   
    static void printCount() {
        cout << "Count: " << count << endl;
    }
};

int MyClass::count = 0;

// mutable
class MyClass3 {
private:
    mutable int cachedValue; 
public:
    int getValue() const {
        cachedValue = calculateValue(); // Permitted because calculateValue() is const
        return cachedValue;
    }
    
    int calculateValue() const { 
        cachedValue++;
        return cachedValue; //cached value was changed inside a const method call
    }
};

