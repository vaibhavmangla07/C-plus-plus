//Area of circle
#include <iostream>
using namespace std;

int main()
{
    float d, r, a;
    
    cout << "Enter diameter of circle: ";
    cin >> d;
    
    r = d/2;
    cout << "Radius of circle is : " << r <<endl;
    
    a = 3.14 * r * r;
    cout << "Area of circle is : " << a <<endl;

    return 0;
}
