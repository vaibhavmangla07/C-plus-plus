//sum
#include <iostream>

int main()
{
    int i, sum = 0;
    std::cout << "The first 10 natural numbers are " << std::endl;

    for (i = 1; i <= 10; i++) 
    {
        std::cout << i << "\t";
        sum = sum + i; // Calculate the sum within the loop
    }
    
    std::cout << "\nThe sum of the first 10 numbers is " << sum << std::endl;

    return 0;
}
