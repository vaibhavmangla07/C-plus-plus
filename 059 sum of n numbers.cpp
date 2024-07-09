// SUM OF N
#include <iostream>

int main()
{
    int i = 1, n, s = 0;
    
    std::cout << "Input Value of terms: ";
    std::cin >> n;
    std::cout << "The first " << n << " natural numbers are:" << std::endl;
    
    while (i <= n)
    {
        std::cout << i << " ";
        s += i;
        i++;
    }
    
    std::cout << "\nThe Sum of first " << n << " numbers is: " << s << std::endl;

    return 0;
}
