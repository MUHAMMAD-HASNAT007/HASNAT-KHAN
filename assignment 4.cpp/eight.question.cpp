#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the vector
void reverseVector(vector<int> &v) {
    int start = 0;
    int end = v.size() - 1;

    while (start < end) {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;

        start++;
        end--;
    }
}

int main() {

    // -------------------- 1. Initialize and Print --------------------
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Printing using traditional for loop:\n";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    cout << "\n\nPrinting using range-based for loop:\n";
    for (int x : numbers) {
        cout << x << " ";
    }

    // -------------------- 2. User Input --------------------
    int N;
    cout << "\n\nEnter number of elements: ";
    cin >> N;

    vector<int> userVec;

    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        userVec.push_back(value);
    }

    // -------------------- 3. Find Maximum and Minimum --------------------
    int max = userVec[0];
    int min = userVec[0];

    for (int i = 1; i < userVec.size(); i++) {
        if (userVec[i] > max)
            max = userVec[i];
        if (userVec[i] < min)
            min = userVec[i];
    }

    cout << "\nMaximum value: " << max;
    cout << "\nMinimum value: " << min;

    // -------------------- 4. Reverse the Elements --------------------
    reverseVector(userVec);

    cout << "\n\nVector after reversing:\n";
    for (int x : userVec) {
        cout << x << " ";
    }

    // -------------------- 5. Count Occurrences --------------------
    int target, count = 0;
    cout << "\n\nEnter number to count: ";
    cin >> target;

    for (int x : userVec) {
        if (x == target)
            count++;
    }

    cout << "Number " << target << " appears " << count << " times.";

    return 0;
}
