/*****
 The NCR formula, also known as the combinations formula.
 It is used to find the number of ways to choose ‘r’ items from a set of ‘n’ items, without considering the order of the items. 
  
  The formula of nCr = n! / (n-r)!r!
******/

#include <iostream>
#include <cmath>
using namespace std;
 
int fact(int n){
    int i = 2, f = 1;
    
    while(i <= n){
        f *= i;
        i++;
    }
    return f;
}

int main() {
    int n, r;
    
    cout << "Enter the value of n and r : ";
    cin >> n >> r;
    
    int nCr = fact(n)/( fact(n-r)*fact(r) );
    
    cout << "nCr : " << nCr << endl;
    
    return 0;
}