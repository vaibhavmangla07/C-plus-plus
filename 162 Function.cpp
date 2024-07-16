//To reverse a number with time execution

#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;
 
int reverseNumber(int num) {
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    
    auto start = high_resolution_clock::now();
    
    cout << "Reversed number: " << reverseNumber(num) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}