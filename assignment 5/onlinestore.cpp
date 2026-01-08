#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Structure to store order details
struct Order {
    int orderID;
    string customerName;
    int numberOfItems;
    float pricePerItem;
};

int main() {
    vector<Order> orders;
    Order ord;
    int n;

    cout << "====================================\n";
    cout << "     ONLINE STORE ORDER SYSTEM       \n";
    cout << "====================================\n";

    cout << "\nEnter total number of orders: ";
    cin >> n;

    // Taking input from user
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter Details for Order " << i + 1 << " ---\n";

        cout << "Order ID: ";
        cin >> ord.orderID;

        cout << "Customer Name: ";
        cin >> ord.customerName;

        cout << "Number of Items: ";
        cin >> ord.numberOfItems;

        cout << "Price per Item: ";
        cin >> ord.pricePerItem;

        orders.push_back(ord);
    }

    // File open for writing priority orders
    ofstream file("priority_orders.txt");

    for (int i = 0; i < n; i++) {
        float totalAmount = orders[i].numberOfItems * orders[i].pricePerItem;

        if (totalAmount > 5000) {
            file << orders[i].orderID << " "
                 << orders[i].customerName << " "
                 << orders[i].numberOfItems << " "
                 << orders[i].pricePerItem << " "
                 << totalAmount << endl;
        }
    }

    file.close();

    // Reading from file
    ifstream readFile("priority_orders.txt");

   
   

    int id, items;
    string name;
    float price, total;

    while (readFile >> id >> name >> items >> price >> total) {
        cout << id << "   ";
        cout << name << "   ";
        cout << items << "      ";
        cout << price << "   ";
        cout << total << endl;
    }

    readFile.close();

    cout << "\nProgram Finished Successfully \n";

    return 0;
}
