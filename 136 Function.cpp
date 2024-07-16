//Square of number
#include<iostream>
using namespace std;

int sq(int a)
{
    return a*a;
}

int main()
{
    int num;
    
    cout << "Enter a number : ";
    cin >> num;
    
    int square = sq(num);
    
    cout << "Square = " << square << endl;
    
    return 0;
}