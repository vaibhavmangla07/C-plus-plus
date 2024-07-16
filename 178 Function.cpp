//Adding two Binary Numbers 

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int reverse(int n) {
    int ans = 0;
    
    while (n > 0) {
        int lastdigit = n % 10;
        ans = ans * 10 + lastdigit;
        n /= 10;
    }
    return ans;
}

int addBinary(int a, int b) {
    int ans = 0;
    int prevCarry = 0;

    while (a > 0 || b > 0 || prevCarry > 0) {
        int sum = prevCarry;
        
        if (a > 0) {
            sum += a % 10;
            a /= 10;
        }
        
        if (b > 0) {
            sum += b % 10;
            b /= 10;
        }

        ans = ans * 10 + (sum % 2);
        prevCarry = sum / 2;
    }

    return reverse(ans);
}

int main() {
    int a, b;

    cout << "Enter two binary numbers: ";
    cin >> a >> b;

    auto start = high_resolution_clock::now();

    cout << "Sum: " << addBinary(a, b) << endl;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;

    return 0;
}