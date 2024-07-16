//write a program of sum of two numbers in c++ 
//with arguments and no return concept 

#include <iostream>
using namespace std;

void sum(int a, int b) {
    int result = a + b;
    cout << "The sum is: " << result << endl;
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    sum(num1, num2);

    return 0;
}
