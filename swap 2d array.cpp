#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{2, 6, 5}, {7, 8, 9}, {10, 14, 16}};
    int arr2[3][3];

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
           arr2[r][c] = arr[c][r];

        }
    }

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << arr2[r][c] << "  ";
        }
        cout << endl;
    }

    return 0;
}