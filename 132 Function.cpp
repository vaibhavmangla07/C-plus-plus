//write a program of sum of two numbers in c++ 
//with no arguments but having return concept 

#include <iostream>
using namespace std;

int sum() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    return a + b;
}

int main() {
    int result = sum();
    cout << "The sum is: " << result << endl;
    
    return 0;
}
