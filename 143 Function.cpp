//Prime Numbers
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            return false; //return 1;
        }
    }
    return true; //return 0;
}

int main() {
    int a, b;
    
    cout << "Enter Range" << endl;
    cin >> a >> b;
    
    cout << "Prime Numbers are : " ;
    
    for(int i = a; i <= b; i++){
        if(prime(i)){
            cout << i << " ";
        }
    }
    
    return 0;
}


