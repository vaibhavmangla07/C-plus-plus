//Addition subtraction multiplication Division
#include <iostream>
using namespace std;

int s(int a, int b) {
    int sum = a + b;

    return sum;
}

int m(int a, int b) {
    int multiply = a * b;

    return multiply;
}

int d(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero" << endl;

        return 0;
    }
    int division = a / b;

    return division;
}

int ss(int a, int b) {
    int subtract = a - b;
    
    return subtract;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = s(a, b);
    cout << "\nsum         : " << sum << endl;

    int subtract = ss(a, b);
    cout << "subtraction : " << subtract << endl;

    int multiply = m(a, b);
    cout << "multiple    : " << multiply << endl;

    int division = d(a, b);
    cout << "division    : " << division << endl;

    return 0;
}
