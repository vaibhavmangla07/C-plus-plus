//greater 4 without repeat
#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    if (a > b && a > c && a > d) 
    {
        cout << a <<" is the greater no.";
    } 
    else if (b > c && b > d) 
    {
        cout << b <<" is the greater no.";
    } 
    else if (c > d)
    {
        cout << c <<" is the greater no.";
    }
    else 
    {
        cout << d <<" is the greater no.";
    }

    return 0;
}
