// SUM MEAN
#include <iostream>

int main()
{
    int i = 1, s = 0, m = 0;
    std::cout << "The first 10 natural numbers are:" << std::endl;

    while (i <= 10)
    {
        std::cout << i << " ";
        s += i;
        i++;
    }

    std::cout << "\nThe Sum is: " << s << std::endl;
    m = s / 10;
    std::cout << "The mean is: " << m << std::endl;

    return 0;
}

