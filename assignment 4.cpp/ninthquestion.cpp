#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix (n): ";
    cin >> n;

    // Create n x n matrix
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Print matrix
    cout << "\nMatrix is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
