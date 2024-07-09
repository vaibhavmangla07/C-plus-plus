//count the digits of a given number (while)
#include <iostream>

int main()
{
    int n, i = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    
    std::cout << "The number of digits is: " << i << std::endl;

    return 0;
}
