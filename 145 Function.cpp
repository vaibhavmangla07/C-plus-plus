//Tribonacci Series
#include <iostream>
#include <cmath>
using namespace std;

void tribonacci(long int n) {
    long int temp1 = 0;
    long int temp2 = 1;
    long int temp3 = 1;
    long int nextterm;
    
    for (long int i = 1; i <= n; i++) {
        cout << temp1 << " ";
        nextterm = temp1 + temp2 + temp3;
        temp1 = temp2;
        temp2 = temp3;
        temp3 = nextterm;
    }
}

int main() {
    long int n;
    
    cout << "Enter range (1 - ?): ";
    cin >> n;
    cout << "Tribonacci numbers are: ";
    
    tribonacci(n);
    
    return 0;
}
