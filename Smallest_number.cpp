#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter number a: ";
    cin >> a;

    cout << "Enter number b: ";
    cin >> b;

    cout << "Enter number c: ";
    cin >> c;
    
    if (a < b)
    {
        if (a < c)
        {
            cout << "A is smaller";
        }
        else
        {
            cout << "C is smaller";
        }
    }
    else
    {
        if (b < c)
        {
            cout << "B is smaller";
        }
        else
        {
            cout << "C is smaller";
        }
    }

    return 0;
}