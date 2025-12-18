#include <iostream>
#include <iomanip>
using namespace std;

const int DAYS = 7;
const int TIMES = 4;

/* Function to input temperature data */
void inputTemperatures(float temp[DAYS][TIMES]) {
    for (int i = 0; i < DAYS; i++) {
        cout << "\nEnter temperatures for Day " << i + 1 << endl;
        for (int j = 0; j < TIMES; j++) {
            cout << "Time " << j + 1 << ": ";
            cin >> temp[i][j];
        }
    }
}

/* Function to find highest and lowest temperature */
void findHighLow(float temp[DAYS][TIMES], float &highest, float &lowest) {
    highest = temp[0][0];
    lowest = temp[0][0];

    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < TIMES; j++) {
            if (temp[i][j] > highest)
                highest = temp[i][j];
            if (temp[i][j] < lowest)
                lowest = temp[i][j];
        }
    }
}

/* Function to calculate average temperature of each day */
void calculateDailyAverage(float temp[DAYS][TIMES], float avg[DAYS]) {
    for (int i = 0; i < DAYS; i++) {
        float sum = 0;
        for (int j = 0; j < TIMES; j++) {
            sum += temp[i][j];
        }
        avg[i] = sum / TIMES;
    }
}

/* Function to display formatted table */
void displayResults(float temp[DAYS][TIMES], float avg[DAYS],
                    float highest, float lowest) {

    cout << "\nTemperature Report\n";
    cout << "--------------------------------------------------\n";
    cout << "Day   T1     T2     T3     T4     Average\n";
    cout << "--------------------------------------------------\n";

    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << i + 1 << " ";
        for (int j = 0; j < TIMES; j++) {
            cout << setw(6) << temp[i][j];
        }
        cout << setw(9) << avg[i] << endl;
    }

    cout << "--------------------------------------------------\n";
    cout << "Highest Temperature of Week: " << highest << endl;
    cout << "Lowest Temperature of Week : " << lowest << endl;
}

/* Main function */
int main() {
    float temperature[DAYS][TIMES];
    float dailyAverage[DAYS];
    float highest, lowest;

    inputTemperatures(temperature);
    findHighLow(temperature, highest, lowest);
    calculateDailyAverage(temperature, dailyAverage);
    displayResults(temperature, dailyAverage, highest, lowest);

    return 0;
}
