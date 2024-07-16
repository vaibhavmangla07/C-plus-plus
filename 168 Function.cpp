//Perfect number

#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

void printPerfectNumbers(int start, int end) {
    if (start > end) {
        return;
    }

    int sum = 0;
    for (int i = 1; i <= start / 2; i++) {
        if (start % i == 0) {
            sum += i;
        }
    }

    if (sum == start) {
        cout << start << " ";
    }
    printPerfectNumbers(start + 1, end);
}

int main() {
    int starting, ending;

    cout << "Enter the starting range : ";
    cin >> starting;
    
    cout << "Enter the Ending range : ";
    cin >> ending;
    
    auto start = high_resolution_clock::now();
    
    printPerfectNumbers(starting, ending);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




