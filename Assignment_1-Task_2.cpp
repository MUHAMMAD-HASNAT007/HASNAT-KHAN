#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int physics, chemistry, biology, english, urdu;
    cout << "Enter the number of Physics: ";
    cin >> physics;
    cout << "Enter the number of Chemistry: ";
    cin >> chemistry;
    cout << "Enter the number of Biology: ";
    cin >> biology;
    cout << "Enter the number of English: ";
    cin >> english;
    cout << "Enter the number of Urdu: ";
    cin >> urdu;
    cout << endl;
    int totalmarks = 500;
    float obtainmarks;

    obtainmarks = physics + chemistry + biology + english + urdu;
    float percentage = (static_cast<float> (obtainmarks) / totalmarks) * 100;

    // Division of Grade
    if (percentage >= 90 )
    {
        cout << " Grade "<< setw(15)<< "A" << endl;
    }
    else if (percentage >= 80 )
    {
        cout << " Grade "<< setw(15)<< "B" << endl;
    }
    else if (percentage >= 70 )
    {
        cout << " Grade "<<setw(15)<< "C" << endl;
    }
    else if (percentage >= 60 )
    {
        cout << " Grade "<<setw(15)<< "D" << endl;
    }
    else if (percentage >= 50)
    {
        cout << " Grade "<<setw(15)<< "E" << endl;
    }
    else if (percentage > 50)
    {
        cout << " Grade "<<setw(15)<< "F" << endl;
    }

    cout << "__Detailed Marks Certificate__" << endl;
    cout << setw(15)<< left << "Physics" <<physics << endl;
    cout << setw(15) << left << "chemistry" << chemistry << endl;
    cout << setw(15) << left << "biology" << biology<< endl;
    cout << setw(15) << left << "english" << english << endl;
    cout << setw(15) << left << "urdu" << urdu << endl;
    cout << endl;
    cout << setw(15) << left << "Obtained Marks" << obtainmarks << endl;
    cout << setw(15) << left << "percentage" << percentage;
    cout << endl;
    return 0;
}