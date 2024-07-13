#include <iostream>
#include <string>
using namespace std;

int main() {
    string NumberString = "10";

    "Stoi means string to integer and it's a native C++ method for converting data between string and int";
    int IntegerNumber = stoi(NumberString);

    cout << "String converted into Integer: " << IntegerNumber << endl;
    
    "ToString is a native method for converting any value into it's String format";
    string IntegerToString = to_string(IntegerNumber);

    /*
        There are other methods besides the stoi:

        stoi -> String into Integer.
        stoll -> String into long long.
        stol -> String into long.
        stod -> String into Double.
        stold -> String into Long Double.
    */
    return 0;
}
