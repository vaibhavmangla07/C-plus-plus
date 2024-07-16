//Fibonacci Series
#include <iostream>
#include <cmath>
using namespace std;

void fibonacci(long int n){
    long int temp1 = 0;
    long int temp2 = 1;
    long int nextterm;
    
    for(long int i = 1; i <= n; i++){
        cout << temp1 << " ";
        nextterm = temp1 + temp2;
        temp1 = temp2;
        temp2 = nextterm;
    }
}

int main() {
    long int n;
    
    cout << "Enter range (1 - ?)" << endl;
    cin >> n;
    cout << "Fibonacci numbers are : ";
    
    fibonacci(n);
    
    return 0;
}


