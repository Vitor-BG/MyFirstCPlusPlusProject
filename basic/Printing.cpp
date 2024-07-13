#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() 
{
    //int numToBeReceived;
    string numToBeReceived; 
    // Cout is for printing data
    cout << "Insert a number: ";
    // std::endl is responsible for ending the line 
    
    // Cin is for recieving data
    cin >> numToBeReceived;

    //cout << "Vai tomar no cu";

    // << is needed to expressing what will be read or written it is also needed to separate strings from variables or other data types.
    cout << "Você digitou: " << numToBeReceived << endl;

    return 0;
}