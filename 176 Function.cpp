//Decimal to Hexadecimal

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

string DecimalToHexadecimal(int n){
    string ans = "";
    int x = 1;
    int y;
    
    while(x <= n){
        x *= 16;
    }
        x /= 16; 
    
    while(x > 0){
        y = n/x;
        n -= y*x;
        x /= 16;
        
        if(y <= 9){
            ans = ans + to_string(y);
        }
        else{
            char c = 'A' + y - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main() {
    int n;

    cout << "Enter a number : ";
    cin >> n;
    
    auto start = high_resolution_clock::now();
    
    cout << DecimalToHexadecimal(n) << endl; 
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}