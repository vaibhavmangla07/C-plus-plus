//greater 5 without repeat
#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, d, e;
    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;

    if (a > b && a > c && a > d && a > e) 
    {
        cout << a <<" is the greater no.";
    } 
    else if (b > c && b > d && b > e) 
    {
        cout << b <<" is the greater no.";
    } 
    else if (c > d && c > e)
    {
        cout << c <<" is the greater no.";
    }
    else if (d > e)
    {
        cout << d <<" is the greater no.";
    }
    else 
    {
        cout << e <<" is the greater no.";
    }

    return 0;
}
