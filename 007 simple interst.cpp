//Simple Interst
#include <iostream>
using namespace std;

int main()
{
    float p, r, t, si, ap;
    
    cout << "Enter principal amount: ";
    cin >> p;
    
    cout << "Enter rate of interest: ";
    cin >> r;
    
    cout << "Enter time taken: ";
    cin >> t;
    
    si = (p * r * t) / 100;
    cout << "Simple interest is " << si << endl;
    
    ap = p + si;
    cout << "Amount to pay is " << ap << endl;

    return 0;
}
