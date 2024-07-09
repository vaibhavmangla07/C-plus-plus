//TABLE 
#include <iostream>

int main()
{
    int n, i = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Table of " << n << std::endl;
    
    while (i <= 10)
    {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
        i++;
    }

    return 0;
}
