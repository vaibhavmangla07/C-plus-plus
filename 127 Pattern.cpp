//Hollow Rhombus
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    // Top part of the rhombus
    for (int i = 1; i <= n; i++) 
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) 
        {
            cout << " ";
        }

        // Print stars and spaces inside the rhombus
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n) 
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
