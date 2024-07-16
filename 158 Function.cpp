// Armstrong Number 153 = 1*1*1 + 5*5*5 + 3*3*3 = 1 + 125 + 27 = 153

#include <iostream>
#include <cmath>
using namespace std;
 
int isArmstrong(int num) 
{
    int originalNum = num, digit, arm = 0;

    while (num > 0) 
    {
        digit = num % 10;
        arm += (digit * digit * digit);
        num /= 10;
    }

    return (originalNum == arm);
}

int main() {
    int n;
    cout << "Enter the number ";
    cin >> n ;
    
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number" << endl;
    }
    else {
        cout << n << " is not an Armstrong number" << endl;
    }
    
    return 0;
}







