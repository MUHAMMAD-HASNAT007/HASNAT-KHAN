#include <iostream>
using namespace std;

int main() {
    int N;
    int matrix[10][10];
    int arr[100];
    int k = 0;

    cout << "Enter order of matrix: ";
    cin >> N;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
            arr[k] = matrix[i][j];
            k++;
        }
    }

    // Bubble sort (simple sorting)
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Put sorted elements back into matrix
    k = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = arr[k];
            k++;
        }
    }

    cout << "\nSorted Matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
