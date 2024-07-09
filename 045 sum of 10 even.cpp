//sum of even
#include <iostream>

int main()
{
    int i, sum = 0;
    std::cout << "The first 10 even numbers are " << std::endl;

    for (i = 2; i <= 20; i=i+2) 
    {
        std::cout << i << "\t";
        sum = sum + i; // Calculate the sum within the loop
    }
    
    std::cout << "\nThe sum of the first 10 even numbers is " << sum << std::endl;

    return 0;
}
