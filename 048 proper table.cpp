//Proper table
#include <iostream>

int main()
{
    int j, n;
    std::cout << "Input the number" << std::endl;
    std::cout << "(Table to be calculated): ";
    std::cin >> n;
    std::cout << std::endl;

    for (j = 1; j <= 10; j++)
    {
        std::cout << n << " X " << j << " = " << n * j << std::endl;
    }

    return 0;
}
