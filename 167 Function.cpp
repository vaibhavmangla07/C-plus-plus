//Absolute Difference

#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

int absolute_difference(int a, int b)
{
    return (a > b) ? (a - b) : (b - a);
}

int main() {
    int m, n;
    
    cout << "Enter two values : ";
    cin >> m >> n;
    
    int diff = absolute_difference(m, n);
    
    cout << "Absolute difference between " << m << " and " << n << " is " << diff << endl;
    cout << "Absolute difference between " << n << " and " << m << " is " << diff << endl;
    
    auto start = high_resolution_clock::now();
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




