#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    string name;
    int age;
    vector<string> skills;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> employees;

    for (int i = 0; i < n; i++) {
        Employee e;
        int s;

        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter name: ";
        cin >> e.name;

        cout << "Enter age: ";
        cin >> e.age;

        cout << "Enter number of skills: ";
        cin >> s;

        for (int j = 0; j < s; j++) {
            string skill;
            cout << "Enter skill: ";
            cin >> skill;
            e.skills.push_back(skill);
        }

        employees.push_back(e);
    }

    cout << "\nEmployee Details\n";

    for (int i = 0; i < n; i++) {
        cout << "\nName: " << employees[i].name << endl;
        cout << "Age: " << employees[i].age << endl;
        cout << "Skills: ";

        for (int j = 0; j < employees[i].skills.size(); j++) {
            cout << employees[i].skills[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
