#include <iostream>
#include <iomanip>
using namespace std;
// A program that finds Sum, difference, Multiplication and Division
int main()
{
    float a, b;
    cout << "Enter a ";
    cin >> a;
    cout << "Enter b ";
    cin >> b;

    cout << fixed<< setprecision(3);

    float sum = a + b;
    float difference = a - b;
    float product = a * b;

    cout << "Sum is = " << sum << endl;
    cout << "Difference is = " << difference << endl;
    cout << "Product is = " << product << endl;

    if (a==0 )
    {
        cout << "division by 0 is undefined" << endl;
    }
    else
    {
        cout << "division = "<< a/b << endl;

    }
    return 0;
}