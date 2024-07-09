//greater 3 without repeat
#include <iostream>
using namespace std;

int main() 
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if (x > y && x > z) 
    {
        cout << x <<" is the greater no.";
    } 
    else if (y > z) 
    {
        cout << y <<" is the greater no.";
    } 
    else 
    {
        cout << z <<" is the greater no.";
    }

    return 0;
}
