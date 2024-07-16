// Addition, Subtraction, Multiplication, Division with time execution
#include <iostream>
#include <chrono> // For measuring execution time
using namespace std;
using namespace std::chrono;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
    return a / b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Start measuring time
    auto start = high_resolution_clock::now();

    int sum = add(a, b);
    cout << "\nsum         : " << sum << endl;

    int difference = subtract(a, b);
    cout << "subtraction : " << difference << endl;

    int product = multiply(a, b);
    cout << "multiplication : " << product << endl;

    int quotient = divide(a, b);
    cout << "division    : " << quotient << endl;

    // Stop measuring time and calculate the elapsed time
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken to execute: " << duration.count() << " microseconds" << endl;

    return 0;
}
