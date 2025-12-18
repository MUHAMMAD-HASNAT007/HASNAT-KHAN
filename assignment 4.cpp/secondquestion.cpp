#include <iostream>
using namespace std;

const int PRODUCTS = 5;
const int DAYS = 7;


void inputSales(int sales[PRODUCTS][DAYS]) {
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "\nEnter sales for Product " << i + 1 << endl;
        for (int j = 0; j < DAYS; j++) {
            cout << "Day " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }
}


void calculateRevenue(int sales[PRODUCTS][DAYS], int revenue[PRODUCTS]) {
    for (int i = 0; i < PRODUCTS; i++) {
        revenue[i] = 0;
        for (int j = 0; j < DAYS; j++) {
            revenue[i] = revenue[i] + sales[i][j];
        }
    }
}


int findMaxProduct(int revenue[PRODUCTS]) {
    int maxIndex = 0;

    for (int i = 1; i < PRODUCTS; i++) {
        if (revenue[i] > revenue[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}


int findBestDay(int sales[PRODUCTS][DAYS]) {
    int dayTotal[DAYS];

    for (int j = 0; j < DAYS; j++) {
        dayTotal[j] = 0;
        for (int i = 0; i < PRODUCTS; i++) {
            dayTotal[j] = dayTotal[j] + sales[i][j];
        }
    }

    int bestDay = 0;
    for (int j = 1; j < DAYS; j++) {
        if (dayTotal[j] > dayTotal[bestDay]) {
            bestDay = j;
        }
    }
    return bestDay;
}


int main() {
    int sales[PRODUCTS][DAYS];
    int revenue[PRODUCTS];

    inputSales(sales);
    calculateRevenue(sales, revenue);

    int maxProduct = findMaxProduct(revenue);
    int bestDay = findBestDay(sales);

    cout << "\nWeekly Revenue of Each Product:\n";
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "Product " << i + 1 << ": " << revenue[i] << endl;
    }

    cout << "\nProduct with Maximum Weekly Revenue: Product " 
         << maxProduct + 1 << endl;

    cout << "Best Sales Day Overall: Day " 
         << bestDay + 1 << endl;

    return 0;
}
