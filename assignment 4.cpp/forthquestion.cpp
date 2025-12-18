#include <iostream>
using namespace std;

int main() {
    int m, n;
    int a[10][10];

    cout << "Enter rows: ";
    cin >> m;
    cout << "Enter columns: ";
    cin >> n;

    cout << "Enter matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nRotated Matrix (90 degree counterclockwise):\n";

    // Print column by column from right to left
    for (int j = n - 1; j >= 0; j--) {
        for (int i = 0; i < m; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
