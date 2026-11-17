#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half of the hollow diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print first star
        cout << "*";

        // Print hollow spaces and second star
        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }

    // Lower half of the hollow diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print first star
        cout << "*";

        // Missing block added here: Print hollow spaces and second star
        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}