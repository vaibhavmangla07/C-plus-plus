// Factorial Number
#include <iostream>
#include <cmath>
using namespace std;
 
int fact(int n){
    int f = 1;
    
    for(int i = 2; i <= n; i++){
        f *= i;
    }
    return f;
}

int main() {
    int n;
    
    cout << "Enter a number : ";
    cin >> n;
    
    cout << "Factorial is : " << fact(n) << endl;
    
    return 0;
}







