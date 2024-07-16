// Area of Rectangle

#include<iostream>
#include<cmath>
using namespace std;

float aor(float l, float b)
{
    return (l * b);
}

int main()
{
    float length, breadth;
    
    cout << "Enter Length and breadth : ";
    cin >> length >> breadth;
    
    float area = aor(length, breadth);
    
    cout << "Area of Rectangle = " << area << endl;
    
    return 0;
}