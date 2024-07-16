//Quadratic Equations
#include <iostream>
#include <cmath>
using namespace std;

float calculateDiscriminant(float a, float b, float c) 
{
    return b * b - 4 * a * c;
}

void calculateAndDisplayRoots(float a, float b, float c) 
{
    float r1, r2, d;

    d = calculateDiscriminant(a, b, c);

    if (d > 0) 
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        {
            cout << "the real roots are " << r1 << " and " << r2 << endl;
        }
    } 
    else if (d == 0) 
    {
        r1 = -b / (2 * a);
        r2 = r1; // Both roots are equal
        {
            cout << "Roots are equal and they are " << r1 << endl;
        }
    } 
    else 
    {
        cout << "Roots are imaginary" << endl;
    }
}

int main() 
{
    float a, b, c;

    cout << "Enter the values of a b c: ";
    cin >> a >> b >> c;

    calculateAndDisplayRoots(a, b, c);

    return 0;
}