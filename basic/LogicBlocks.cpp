#include <string>
#include <iostream>

using namespace std;

int main()
{
    int cheater = 0;
    cout << "Insert a condition for verification between 1 and 10.";
    int condition;
    cin >> condition;
    // Simple verifications.
    cout << endl;
    if (condition == 5) {
        cout << "Given Codition (" << condition << ") is equal to 5.";
    }else if (condition > 5) {
        cout << "Given Codition (" << condition << ") is greater than 5.";
    } else {
        cout << "Given Codition (" << condition << ") is lesser than 5.";
    }
    // >=, <= also exists.
    cout << endl;
    // Logic and &&, or || verification and if inside another if
    cout << "Very well, insert a new condition for verification between 1 and 10.";
    cin >> condition;
    cout << endl;
    if(condition > 5 && condition < 10){
        cout << condition << " is greater than 5 and lesser than 10.";
    }else if (condition < 5){
        cout << "Your number is lesser than 5.";
    }else if(condition == 10 || condition == 5){
        cout << "Your number is equal to 5 or 10.";
        if (condition == 10){
            cout << "Your number is 10.";
        }else{
            cout << "Your number is 5.";
        }
    }
    else if(condition < 0 || condition > 10){
        cout << "You cheated";
        cheater++;
    }
    cout << endl;
    cout << "Switch demonstration, choose a number between 1 and 5";
    cin >> condition;
    cout << endl;
    switch(condition)
    {
        case 1:
        cout << "Your number is 1.";
        break;
        case 2:
        cout << "Your number is 2.";
        break;
        case 3:
        cout << "Your number is 3.";
        break;
        case 4:
        cout << "Your number is 4.";
        break;
        case 5:
        cout << "Your number is 5.";
        break;
        default:
        if(cheater >= 1){
            cout << "You cheeated again.";
        }else{
            cout << "You cheeated.";
        }
    }
    cout << endl;
    return 0;
}