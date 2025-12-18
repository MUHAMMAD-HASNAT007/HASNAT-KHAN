#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

/* Function to display seats */
void displaySeats(int seats[ROWS][COLS]) {
    cout << "\nBus Seat Arrangement (0 = Empty, 1 = Reserved)\n\n";

    for (int i = 0; i < ROWS; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

/* Function to reserve a seat */
void reserveSeat(int seats[ROWS][COLS]) {
    int r, c;

    cout << "Enter row number (1-10): ";
    cin >> r;
    cout << "Enter seat number (1-10): ";
    cin >> c;

    if (seats[r - 1][c - 1] == 0) {
        seats[r - 1][c - 1] = 1;
        cout << "Seat reserved successfully.\n";
    } else {
        cout << "Seat is already reserved.\n";
    }
}

/* Function to cancel a seat */
void cancelSeat(int seats[ROWS][COLS]) {
    int r, c;

    cout << "Enter row number (1-10): ";
    cin >> r;
    cout << "Enter seat number (1-10): ";
    cin >> c;

    if (seats[r - 1][c - 1] == 1) {
        seats[r - 1][c - 1] = 0;
        cout << "Seat reservation cancelled.\n";
    } else {
        cout << "Seat is already empty.\n";
    }
}

/* Function to count occupied and empty rows */
void countRows(int seats[ROWS][COLS]) {
    int full = 0, partial = 0, empty = 0;

    for (int i = 0; i < ROWS; i++) {
        int count = 0;

        for (int j = 0; j < COLS; j++) {
            if (seats[i][j] == 1)
                count++;
        }

        if (count == 0)
            empty++;
        else if (count == COLS)
            full++;
        else
            partial++;
    }

    cout << "\nRow Status:\n";
    cout << "Fully Occupied Rows: " << full << endl;
    cout << "Partially Occupied Rows: " << partial << endl;
    cout << "Empty Rows: " << empty << endl;
}

/* Main function */
int main() {
    int seats[ROWS][COLS] = {0};   // All seats empty initially
    int choice;

    do {
        cout << "\n--- Bus Seat Reservation Menu ---\n";
        cout << "1. Display Seats\n";
        cout << "2. Reserve a Seat\n";
        cout << "3. Cancel a Seat\n";
        cout << "4. Count Row Status\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displaySeats(seats);
                break;

            case 2:
                reserveSeat(seats);
                break;

            case 3:
                cancelSeat(seats);
                break;

            case 4:
                countRows(seats);
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
