// Check Leap Year
#include <iostream>
#include <cmath>
using namespace std;

bool isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        return 1; // return true; (Leap) 
    } 
    else
    {
        return 0; // return false; (Not leap)
    }
}

int main() {
    int year;
    
    cout << "Enter year : ";
    cin >> year;
    
    if(isLeapYear(year)){
        cout << year << " is a leap year" << endl;
    }
    else{
        cout << year << " is not a leap year" << endl;
    }
    
    return 0;
}