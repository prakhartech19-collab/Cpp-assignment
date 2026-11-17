#include <iostream>
using namespace std;

int main() {
    int rows = 6;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int s = 0; s < rows - i - 1; s++) {
            cout << " ";
        }

        int val = 1;
        // Calculate and print values in the current row
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << "\n";
    }

    return 0;
}