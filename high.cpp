#include <iostream>
using namespace std;

int main() {
    char input;
    cout << "Enter any character: ";
    cin >> input;

    if (input >= '0' && input <= '9') {
        cout << "You entered a digit: " << input << endl;
    } 
    else if (input >= 'A' && input <= 'Z') {
        cout << "You entered an uppercase letter: " << input << endl;
    } 
    else if (input >= 'a' && input <= 'z') {
        cout << "You entered a lowercase letter: " << input << endl;
    } 
    else {
        cout << "You entered a special character or other symbol: " << input << endl;
    }

    return 0;
}
