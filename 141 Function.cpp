//Perimeter of Rectangle

#include<iostream>
#include<cmath>
using namespace std;

float por(float l, float b)
{
    return (2*(l + b));
}

int main()
{
    float length, breadth;
    
    cout << "Enter Length and breadth : ";
    cin >> length >> breadth;
    
    float perimeter = por(length, breadth);
    
    cout << "Perimeter of Rectangle = " << perimeter << endl;
    
    return 0;
}