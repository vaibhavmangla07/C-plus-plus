//greater 5
#include <iostream>
using namespace std;
int main() 
{
    int a, b, c, d, e;
    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;

    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e)
                    cout << a <<" is the greater no.";
                else
                    cout << e <<" is the greater no.";
            }
        }
    }

    if (b > c) {
        if (b > d) {
            if (b > e)
                cout << b <<" is the greater no.";
            else
                cout << e <<" is the greater no.";
        }
    }

    if (c > d) {
        if (c > e)
            cout << c <<" is the greater no.";
        else
            cout << e <<" is the greater no.";
    }

    if (d > e)
        cout << d <<" is the greater no.";
    else
        cout << e <<" is the greater no.";

    return 0;
}
