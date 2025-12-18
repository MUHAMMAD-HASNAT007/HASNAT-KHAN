#include <iostream>
#include <vector>
using namespace std;

// 1. Remove even numbers from vector
void removeEvenNumbers(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            v.erase(v.begin() + i);
            i--;   // important after erase
        }
    }
}

// 2. Find missing element
int findMissingElement(vector<int> a, vector<int> b) {
    int sum1 = 0, sum2 = 0;

    for (int x : a)
        sum1 += x;

    for (int x : b)
        sum2 += x;

    return sum1 - sum2;
}

// 3. Check duplicates
bool hasDuplicates(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] == v[j])
                return true;
        }
    }
    return false;
}

// 4. Count pairs with given sum
int countPairs(vector<int> v, int target) {
    int count = 0;

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == target)
                count++;
        }
    }
    return count;
}

int main() {

    // -------- Remove Even Numbers --------
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};

    removeEvenNumbers(numbers);

    cout << "After removing even numbers:\n";
    for (int x : numbers)
        cout << x << " ";

    // -------- Find Missing Element --------
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 4, 5};

    cout << "\n\nMissing element is: "
         << findMissingElement(a, b);

    // -------- Check for Duplicates --------
    vector<int> dupCheck = {3, 1, 4, 2, 3};

    if (hasDuplicates(dupCheck))
        cout << "\n\nVector contains duplicates.";
    else
        cout << "\n\nVector has no duplicates.";

    // -------- Sum of Pairs --------
    vector<int> pairVec = {1, 5, 7, -1, 5};
    int target = 6;

    cout << "\n\nNumber of pairs with sum " << target
         << " is: " << countPairs(pairVec, target);

    return 0;
}
