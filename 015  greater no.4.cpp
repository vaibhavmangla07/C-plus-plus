//greater 4
#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l;
    cout << "Enter four numbers: ";
    cin >> i >> j >> k >> l;

    if (i > j)
    {
        if (i > k)
        {
            if (i > l)
            {
                cout << i << " is the greater no." << endl;
            }
            else
            {
                cout << l << " is the greater no." << endl;
            }
        }
    }
    else
    {
        if (j > k)
        {
            if (j > l)
            {
                cout << j << " is the greater no." << endl;
            }
            else
            {
                cout << l << " is the greater no." << endl;
            }
        }
        else
       {
            if (k > l)
            {
                cout << k << " is the greater no." << endl;     
            }
            else
            {
                cout << l << " is the greater no." << endl;
            }
        }
    }
    return 0;
}

