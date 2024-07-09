//Factorial
#include <iostream>

int main()
{
    long int i, n, f;
    f = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        std::cout << i << " ";
        f = f * i;
    }
    
    std::cout << "\nThe factorial of " << n << " is: " << f << std::endl;

    return 0;
}
