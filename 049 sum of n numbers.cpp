// sumo of n no.
#include <iostream>

int main()
{
    int i, n, s;
    s = 0;
    std::cout << "Input Value of terms: ";
    std::cin >> n;
    std::cout << "\nThe first " << n << " natural numbers are:" << std::endl;
    for (i = 1; i <= n; i++)
    {
        std::cout << i << " ";
        s += i;
    }
    std::cout << "\nThe Sum of natural numbers up to " << n << " terms: " << s << std::endl;

    return 0;
}
