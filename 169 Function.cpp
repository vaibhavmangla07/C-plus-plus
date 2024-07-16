//sum of n terms

#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

int sum(int n){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += i;
    }
    return ans;
}

int main() {
    int n;

    cout << "Enter a number : ";
    cin >> n;
    
    auto start = high_resolution_clock::now();
    
    cout << sum(n) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




