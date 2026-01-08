#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Structure to store employee data
struct Employee {
    int id;
    string name;
    float monthlySalary;
};

int main() {
    vector<Employee> employees;
    Employee emp;
    int n;
    float limit;

    // Input number of employees
    cout << "Enter number of employees: ";
    cin >> n;

    // Taking employee data
    for (int i = 0; i < n; i++) {
        cout << "\nEnter Employee ID: ";
        cin >> emp.id;

        cout << "Enter Employee Name: ";
        cin >> emp.name;

        cout << "Enter Monthly Salary: ";
        cin >> emp.monthlySalary;

        employees.push_back(emp);
    }

    // Salary limit
    cout << "\nEnter yearly salary limit: ";
    cin >> limit;

    // File open for writing
    ofstream file("high_salary.txt");

    // Saving employees with high salary
    for (int i = 0; i < n; i++) {
        float yearlySalary = employees[i].monthlySalary * 12;

        if (yearlySalary > limit) {
            file << employees[i].id << " "
                 << employees[i].name << " "
                 << yearlySalary << endl;
        }
    }

    file.close();

    // Reading from file
    ifstream readFile("high_salary.txt");

    cout << "\nEmployees with high yearly salary:\n";
    cout << "ID  Name  YearlySalary\n";

    int id;
    string name;
    float yearly;

    while (readFile >> id >> name >> yearly) {
        cout << id << "  " << name << "  " << yearly << endl;
    }

    readFile.close();

    return 0;
}
