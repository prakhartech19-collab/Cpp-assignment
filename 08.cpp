#include <iostream>
using namespace std;

int main() {
    // Upper half of the diamond
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= (5 - i); j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= (5 - i); j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}