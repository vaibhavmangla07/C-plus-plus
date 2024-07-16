//Ackerman Function

#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;
 
int ackermann(int m, int n) {
    if (m == 0){
        return n + 1;
    }
    else if (n == 0){
        return ackermann(m - 1, 1);
    }
    else{
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m, n;
    
    cout << "Enter values for m and n: ";
    cin >> m >> n;
    
    auto start = high_resolution_clock::now();
    
    cout << "Ackermann(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}