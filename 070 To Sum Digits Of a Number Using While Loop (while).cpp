//SUM
#include <iostream>

int main()
{
    int n, i, s = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while (n > 0)
    {
        i = n % 10;
        s = s + i;
        n = n / 10;
    }

    std::cout << "The sum of the digits is: " << s << std::endl;

    return 0;
}
