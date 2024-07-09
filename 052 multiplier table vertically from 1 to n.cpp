//Multiplication table from 1 to n
#include <iostream>

int main()
{
    int j, i, n;
    std::cout << "Input up to the table number starting from 1 to ";
    std::cin >> n;
    std::cout << "Multiplication table from 1 to " << n << std::endl;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            std::cout << j << "x" << i << " = " << (i * j);
            if (j < n)
                std::cout << ", ";
        }
        std::cout << std::endl;
    }

    return 0;
}
