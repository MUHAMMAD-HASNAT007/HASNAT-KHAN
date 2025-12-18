#include <iostream>
#include <string>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

// Function to input puzzle
void inputPuzzle(char puzzle[ROWS][COLS]) {
    cout << "Enter the crossword puzzle (# for empty):\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> puzzle[i][j];
        }
    }
}

// Count horizontal words
int countHorizontalWords(char puzzle[ROWS][COLS]) {
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        int length = 0;

        for (int j = 0; j < COLS; j++) {
            if (puzzle[i][j] != '#') {
                length++;
            } else {
                if (length >= 3)
                    count++;
                length = 0;
            }
        }
        if (length >= 3)
            count++;
    }

    return count;
}

// Count vertical words
int countVerticalWords(char puzzle[ROWS][COLS]) {
    int count = 0;

    for (int j = 0; j < COLS; j++) {
        int length = 0;

        for (int i = 0; i < ROWS; i++) {
            if (puzzle[i][j] != '#') {
                length++;
            } else {
                if (length >= 3)
                    count++;
                length = 0;
            }
        }
        if (length >= 3)
            count++;
    }

    return count;
}

// Find the longest word
string findLongestWord(char puzzle[ROWS][COLS]) {
    string longest = "";

    // Check horizontal words
    for (int i = 0; i < ROWS; i++) {
        string word = "";
        for (int j = 0; j < COLS; j++) {
            if (puzzle[i][j] != '#') {
                word += puzzle[i][j];
            } else {
                if (word.length() > longest.length())
                    longest = word;
                word = "";
            }
        }
        if (word.length() > longest.length())
            longest = word;
    }

    // Check vertical words
    for (int j = 0; j < COLS; j++) {
        string word = "";
        for (int i = 0; i < ROWS; i++) {
            if (puzzle[i][j] != '#') {
                word += puzzle[i][j];
            } else {
                if (word.length() > longest.length())
                    longest = word;
                word = "";
            }
        }
        if (word.length() > longest.length())
            longest = word;
    }

    return longest;
}

// Main function
int main() {
    char puzzle[ROWS][COLS];

    inputPuzzle(puzzle);

    cout << "\nHorizontal words: " << countHorizontalWords(puzzle) << endl;
    cout << "Vertical words: " << countVerticalWords(puzzle) << endl;
    cout << "Longest word: " << findLongestWord(puzzle) << endl;

    return 0;
}
