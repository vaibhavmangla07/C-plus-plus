//Binary to decimal

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int BinaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10; 
    }
    return ans;
}

int main() {
    int n;

    cout << "Enter a number : ";
    cin >> n;
    
    auto start = high_resolution_clock::now();
    
    cout << BinaryToDecimal(n) << endl; 
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}