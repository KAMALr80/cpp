#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer for n: ";
    cin >> n;

    // Validate input to avoid invalid or infinite loops
    if (n <= 0) {
        cout << "Please enter a valid positive integer." << endl;
        return 1; // Exit the program with an error code
    }

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << j << " ";
            j = j + 1; // Increment j to avoid infinite loop
        }
        cout << endl; // Move to the next line after each row
        i = i + 1; // Increment i to avoid infinite loop
    }

    return 0;
}
