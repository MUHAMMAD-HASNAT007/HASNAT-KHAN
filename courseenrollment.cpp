#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int id;
};

struct Course {
    string name;
    string code;
};

int main() {
    int c;
    cout << "Courses: ";
    cin >> c;

    vector<Course> course(c);

    vector<Student> students[10];   // students for each course

    for (int i = 0; i < c; i++) {
        int s;
        cout << "\nCourse " << i + 1 << endl;

        cout << "Name: ";
        cin >> course[i].name;

        cout << "Code: ";
        cin >> course[i].code;

        cout << "Students: ";
        cin >> s;

        for (int j = 0; j < s; j++) {
            Student st;
            cout << "Student name: ";
            cin >> st.name;
            cout << "Student id: ";
            cin >> st.id;

            students[i].push_back(st);
        }
    }

    cout << "\nOUTPUT\n";

    for (int i = 0; i < c; i++) {
        cout << "\n" << course[i].name << " " << course[i].code << endl;

        for (int j = 0; j < students[i].size(); j++) {
            cout << students[i][j].name << " "
                 << students[i][j].id << endl;
        }
    }

    return 0;
}
