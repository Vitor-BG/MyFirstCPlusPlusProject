#include <iostream>

/* 
    Maps are capable of storing 2 types of data simultaneously and search for it based on one of the stored values.
    It also can be manipulated similarly to a vector.
*/
/*
    OBS.: Map has a unordered version which store the relation but no in the same order, pair 1 can be stored in index 5 for example.
    It's faster and lighter than the standart map. The sintaxe is the same as map except it's called unordered_map instead of map
*/
#include <map>
int maps() {
    // to declare a map you'll use map<type1, type2> VariableName;
    std::map<std::string, int> ageMap;
    // Storing String Alice with integer value 30, they're together in the map
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // to retrieve a value you can use VariableName[Value] to get the associated value
    std::cout << "Age of Alice: " << ageMap["Alice"] << std::endl;
    std::cout << "Age of Bob: " << ageMap["Bob"] << std::endl;

    return 0;
}

/*
    Stacks are lists which the first element to enter is the last to leave (FILO)
*/
#include <stack>
int stacks() {
    //to declare a stack: stack<VariableType> VariableName;
    std::stack<int> myStack;
    //Push will add the value to the top of the stack.
    myStack.push(10);
    //Top will return the top element without interacting with it.
    myStack.top();
    //pop will remove the top element from the stack.
    myStack.pop();
    //empty will return either true or false depending if the stack has elements inside
    myStack.empty();
    std::cout << "Top element: " << myStack.top() << std::endl;

    return 0;
}
/*
    I will not exemplify queues since they're the same as stacks except the first element to entender is the first to leave
    and you use front() instead of top
*/

/*
    Deque is like the union of a queue and a stack. Except that you can choose when you want to interact with the first or last element.
*/
#include <deque>
int deques() {
    std::deque<int> myDeque;
    myDeque.push_back(10);
    myDeque.push_front(20);
    myDeque.push_back(30);

    for (auto num : myDeque) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
    Sets works similarly to vector excepts it'll ignore repeated elements storing only one, you can use to garantee that every element will be unique
*/
/*
    OBS.: Set has a unordered version which store the relation but no in the same order, pair 1 can be stored in index 5 for example.
    It's faster and lighter than the standart set. The sintaxe is the same as set except it's called unordered_set instead of set
*/
#include <set>
int sets() {
    // To declare a set: set<VariableType> VariableName;
    std::set<int> mySet = {3, 1, 4, 1, 5, 9};
    
    std::cout << "Set: ";
    // For to iterates each element within the set
    for (auto num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
    List are almost identical to vectors but least efficient when inserting ou deleting elements from the list.
*/
#include <list>
int lists() {
    std::list<int> myList;
    //Adding elements
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // Iterating list
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Inserting new element after the first one
    // begin() goes to the start of the list.
    // receives an element and goes to the next element
    // Insert receives the element to be inserted and the position.
    auto it = std::next(myList.begin());
    myList.insert(it, 4);

    // Removing the second element
    // erase receives the position of the element to be removed.
    myList.erase(std::next(myList.begin()));

    // Iterating the modified list
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
 Chrono is the variable to store, get and manipulate date and time.
*/
#include <chrono>
int main() {
    // Current timestamp
    auto startTime = std::chrono::steady_clock::now();

    // Code in execution for some time
    for (int i = 0; i < 1000000; ++i) {
        // Do something
    }

    // current timestamp after code execution
    auto endTime = std::chrono::steady_clock::now();

    // Decurred execution time
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();

    std::cout << "Elapsed time: " << duration << " milisseconds." << std::endl;

    return 0;
}

/*
    File stream, fstream is a variable who can read, write and interact with another file
*/
#include <fstream>
int main() {
    // You can define the mode by the suffix letter i for read, o for write
    std::ofstream outFile("myfile.txt"); // Open file in write mode

    if (outFile.is_open()) {
        outFile << "Test File." << std::endl;
        outFile << "Second Line." << std::endl;
        outFile.close();
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cerr << "Couldn't open file." << std::endl;
    }

    std::ifstream inFile("myfile.txt"); // Open file in read mode

    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Couldn't open file." << std::endl;
    }

    return 0;
}
