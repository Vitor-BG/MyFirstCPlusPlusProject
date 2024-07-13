// When using c++ you'll always need to include the needed headers
#include <iostream>
#include <string>
#include <vector>

// Not a good pratice to declare it globally
using namespace std;

int integer = 20;

double decimal = 1.5;

char character = 'a';

bool boolean = true;


// For Arrays you can declare them with or without predefined values
int numbers[2] = {1,2};
char characters[10];

/*
Declaring without limit will cause erros.

char characters[];
*/ 


// A vector can be declared without limit
std::vector<int> vectorNumbers = {1, 2, 3, 4, 5};


/*
OBS.:
ARRAYS CAN BE DELETED WHEN NOT NEEDED ANYMORE
delete[] numbers
*/

// By default you should declare a String with std::string. For Example:
std::string Name = "Vítor";

// But you can declare them with String if you use the namespace std in your project file. using namespace std;
string name = "Vítor";

