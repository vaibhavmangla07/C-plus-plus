//greater 3
#include <iostream>
using namespace std ;
int main()
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if (x > y)
    {
        if (x > z)
        {
            cout << x << " is the greater no." << endl;
        }
        else
        {
            cout << z << " is the greater no." << endl;
        }
    }
    else
    {
        if (y > z)
        {
            cout << y << " is the greater no." << endl;
        }
        else
        {
            cout << z << " is the greater no." << endl;
        }
    }

    return 0;
}
