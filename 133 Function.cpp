//write a program of sum of two numbers in c++ 
//with arguments and having return concept 

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = sum(num1, num2);
    cout << "The sum is: " << result << endl;

    return 0;
}
