//cube of number
#include<iostream>
using namespace std;

int c(int a)
{
    return a*a*a;
}

int main()
{
    int num;
    
    cout << "Enter a number : ";
    cin >> num;
    
    int cube = c(num);
    
    cout << "Cube = " << cube << endl;
    
    return 0;
}