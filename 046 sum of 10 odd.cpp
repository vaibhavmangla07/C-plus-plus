//sum of odd
#include <iostream>

int main()
{
    int i, sum = 0;
    std::cout << "The first 10 odd numbers are " << std::endl;

    for (i = 1; i <= 20; i=i+2) 
    {
        std::cout << i << "\t";
        sum = sum + i; // Calculate the sum within the loop
    }
    
    std::cout << "\nThe sum of the first 10 odd numbers is " << sum << std::endl;

    return 0;
}
