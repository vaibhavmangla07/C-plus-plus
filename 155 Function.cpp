// find the sum of the factorial series 1!/1 + 2!/2 + 3!/3 + n!/n
#include <iostream>
#include <cmath>
using namespace std;
 
int fact(int n){
    int i = 1, f = 1;
    
    while(i <= n){
        f *= i;
        i++;
    }
    return f;
}

int main() {
    int n, sum = 0;
    
    cout << "Enter a number of series: ";
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        sum += fact(i) / i;
    }
    
    cout << "Sum of Factorial is : " << sum << endl;
    
    return 0;
}







