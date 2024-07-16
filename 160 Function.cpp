//Palindrome Number with time execution 

#include <iostream>
#include <cmath>
#include <climits>
#include <chrono>
using namespace std;
using namespace std::chrono;
 
bool palindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        if (reversed > (INT_MAX - num % 10) / 10) {
            return false;
        }
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return (original == reversed);
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    
    auto start = high_resolution_clock::now();
    
    if (palindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } 
    else {
        cout << num << " is not a palindrome." << endl;
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}







