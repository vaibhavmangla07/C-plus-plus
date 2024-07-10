//Print Hollow Diamond Inscribed in a Rectangle
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    // Upper part of the pattern
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * i - 1; j++) 
        {
            if (j == 1 || j == 2 * i - 1) 
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) 
    {
        for (int j = 1; j <= n - i; j++) 
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * i - 1; j++) 
        {
            if (j == 1 || j == 2 * i - 1) 
            {
                cout << "*";
            } 
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n - i; j++) 
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
