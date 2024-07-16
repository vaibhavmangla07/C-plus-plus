//Decimal to Octal

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int DecimalToOctal(int n){
    int ans = 0;
    int x = 1;
    int y;
    
    while(x <= n){
        x *= 8;
    }
        x /= 8; 
    
    while(x > 0){
        y = n/x;
        n -= y*x;
        x /= 8;
        ans = ans*10 + y;
    }
    return ans;
}

int main() {
    int n;

    cout << "Enter a number : ";
    cin >> n;
    
    auto start = high_resolution_clock::now();
    
    cout << DecimalToOctal(n) << endl; 
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}