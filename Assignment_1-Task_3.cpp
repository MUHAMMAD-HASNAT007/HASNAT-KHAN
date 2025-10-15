#include <iostream>
#include <iomanip>
using namespace std;
// The code that determine greatest number among three number
int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    // Writing conditioning
    if (a == b && a > c)
    {
        cout << "a and b are equal number and greater than c : "<< a << endl;

    }
    else if (a == c && a > b)
    {
        cout << "a and c are equal number and greater than b : "<< c << endl;
    }
    else if (b == c &&  b > a)
    {
        cout << "b  and c are equal number and greater than a : "<< b << endl;
    }
    else if (a > b && a > c)
    {
        cout << "The greatest Number is a which is = "<< a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The greatest Number is b which is  = "<< b << endl;
    }
    else
    {
    cout << "The greatest Number is c which is = "<< c << endl;
    }
    return 0;
}