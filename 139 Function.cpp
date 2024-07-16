//Area of Circle

#include<iostream>
#include<cmath>

using namespace std;

float aoc(int r)
{
    return (3.14 * r * r);
}

int main()
{
    int radius;
    
    cout << "Enter Radius : ";
    cin >> radius;
    
    float area = aoc(radius);
    
    cout << "Area of Circle = " << area << endl;
    
    return 0;
}