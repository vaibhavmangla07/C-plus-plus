/*****
Pascal Traingle

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 

******/

#include <iostream>
#include <cmath>
using namespace std;
 
int fact(int n){
    int i = 2, f = 1;
    
    while(i <= n){
        f *= i;
        i++;
    }
    return f;
}

int main() {
    int n;
    cout << "Enter the number ";
    cin >> n ;
    cout << endl;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << fact(i)/( fact(j) * fact(i-j) ) << " ";
        }
        cout << endl;
    }
    
    return 0;
}