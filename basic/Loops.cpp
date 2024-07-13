#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count = 1;

    cout << "While.";
    while (count <= 5) {
        cout << "Count: " << count << endl;
        count++;
    }

    return 0;

    cout << "Do while.";
    do {
        cout << "Count: " << count << endl;
        count++;
    } while (count <= 5);

    cout << "For";
    for (int i = 1; i <= 5; ++i) {
        cout << "Number: " << i << endl;
    }

    cout << "For each";
    // For each element of a vector/list;
    vector<int> numbers = {1, 2, 3, 4, 5};
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << "Number: " << *it << endl;
    }

    return 0;
}
