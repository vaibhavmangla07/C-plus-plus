//Perfect number in given range with time execution 

#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;
 
int isPerfect(int num){
    int sum = 0;
    
    for (int i = 1; i <= num / 2; i++){
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return (num == sum);
}

void printPerfectNumbers(int starting, int ending) {
    cout << "\nPerfect numbers in the range " << starting << " to " << ending << " are: ";  
  
    for (int i = starting; i <= ending; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
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