#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        int divisor = 0;
        /*
            throws the error with the specified message. std::ERROR_CLASS is responsible for explaning to the catch method which error you encountered.
            This way you can make a catch for multiple cases, for example:
            if the divisor is 0 enter the error and call the method again for a valid data entry. if the entry is a letter end the method withou retry.
        */ 
        if (divisor == 0) {
            throw runtime_error("0 cannot be the divisor.");
        }
        
        int result = 10 / divisor;
        cout << "Result: " << result << endl;
        /*
            const std::runtime_error& e will catch the runtime_error exception and save it as a variable "e".
            the only problem is that it will only catch the exception you specified, to catch any exceptions encountered you can make a catch (...).
            The best way to deal with this is to make a catch for known errors and a generic one for unknown errors this is the best because you cannot print generic exceptions.
            Which makes debugging and maintaining harder later.
        */ 
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
