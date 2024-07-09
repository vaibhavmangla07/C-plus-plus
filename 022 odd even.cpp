//Odd even
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a % 2 == 0)
    {
    cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }

    return 0;
}
