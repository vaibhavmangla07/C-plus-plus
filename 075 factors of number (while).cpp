//FACTORS
#include <iostream>

int main()
{
    int n, i = 1;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "Factors of " << n << " are: ";

    while (i <= n)
    {
        if (n % i == 0)
        {
            std::cout << i << " ";
        }
        i++;
    }

    return 0;
}
