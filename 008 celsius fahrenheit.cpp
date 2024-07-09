//Temp. cal.
#include <iostream>
using namespace std;

int main()
{
    float c, f;
    
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    
    f = (c * 9 / 5) + 32;
    
    cout << "Fahrenheit is " << f << endl;

    return 0;
}
