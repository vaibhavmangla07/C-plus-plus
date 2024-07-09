//Sum and mean 
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g;
    
    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;
    
    f = a + b + c + d + e;
    cout << "Sum of five numbers is: " << f << endl;
    
    g = f / 5;
    cout << "Mean of five numbers is: " << g << endl;

    return 0;
}
