// Check odd even
#include <iostream>
#include <cmath>
using namespace std;

int check(int num){
    if(num%2==0){
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
    return 0;
}

int main() {
    int num;
    
    cout << "Enter a number : ";
    cin >> num;
    
    check(num);
    
    return 0;
}