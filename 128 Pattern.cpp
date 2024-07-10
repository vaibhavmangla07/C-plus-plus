//Hollow Butterfly
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) 
    {
        int inner_space = 2 * n - 2 * i;

        // Left wing
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1 || j == i) 
            {
                cout << "*";
            } 
            else
            {
                cout << " ";
            }
        }

        // Space between the wings
        for (int j = 1; j <= inner_space; j++) 
        {
            cout << " ";
        }

        // Right wing
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1 || j == i) 
            {
                cout << "*";
            } 
            else 
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; i--) 
    {
        int inner_space = 2 * n - 2 * i;

        // Left wing
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }

        // Space between the wings
        for (int j = 1; j <= inner_space; j++) 
        {
            cout << " ";
        }

        // Right wing
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
