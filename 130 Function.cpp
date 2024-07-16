//write a program of sum of two numbers in c++ 
//with no arguments and no return concept 

#include <iostream>
using namespace std;

void sum() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int result = a + b;
    cout << "The sum is: " << result << endl;
}

int main() {
    sum();
    
    return 0;
}
