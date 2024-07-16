// Calculate Simple interst
#include <iostream>
#include <cmath>
using namespace std;

float cal(float p, float r, float t){
    return ((p*r*t)/100);
}

int main() {
    float p, r, t, total;
    
    cout << "Enter the following\n\n";

    cout << "1. Principal Amount : ";
    cin >> p ;

    cout << "2. Rate of Interst : ";
    cin >> r;
    
    cout << "3. Time period (in years) : ";
    cin >> t;
    
    cout << "\nSimple Interst is : " << cal(p, r, t) << endl;
    
    total = p + cal(p, r, t);
    cout << "Total Value is : " << total << endl;
    
    
    return 0;
}







