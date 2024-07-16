//Hexadecimal To Decimal

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int HexadecimalToDecimal(string n) {
    int ans = 0;
    int x = 1;
    int s = n.size();
    
    for(int i = s - 1; i >= 0; i--) {
        if(n[i] >= '0' && n[i] <= '9') {
            ans += x * (n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F') {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main() {
    string n;

    cout << "Enter a hexadecimal number: ";
    cin >> n;
    
    auto start = high_resolution_clock::now();
    
    cout << "Decimal value: " << HexadecimalToDecimal(n) << endl; 
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
