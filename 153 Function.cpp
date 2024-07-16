// Factorial Number
#include <iostream>
#include <cmath>
using namespace std;
 
int fact(int n){
    if(n==0 || n==1){
        return true; //return 1;
    }
    else{
        return (n * fact(n-1));
    }
}

int main() {
    int n;
    
    cout << "Enter a number : ";
    cin >> n;
    
    cout << "Factorial is : " << fact(n) << endl;
    
    return 0;
}







