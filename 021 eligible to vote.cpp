//Vote
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter age: ";
    cin >> a;

    if (a >= 18)
    {
        cout << "Eligible to vote" << endl;
    }
    else
    {
        cout << "Not eligible to vote" << endl;
    }

    return 0;
}
