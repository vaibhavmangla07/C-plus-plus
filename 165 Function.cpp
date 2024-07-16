//HCF or GCF (Highest or Greatest Common Factor) & LCM (Least Common Multiplication)

#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;
 
int findHCF(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (a % max == 0 && b % max == 0) {
            return max;
        }
        max--;
    }
}

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int num1, num2;
    
    cout << "Enter two number : ";
    cin >> num1 >> num2;
    
    auto start = high_resolution_clock::now();

    cout << endl;
    cout << "HCF : " << findHCF(num1, num2) << endl;
    cout << "LCM : " << findLCM(num1, num2) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}