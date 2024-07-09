//TABLE 
#include <iostream>

int main()
{
    int j = 1, n, m;
    std::cout << "Input the number" << std::endl;
    std::cout << "(Table to be calculated): ";
    std::cin >> n;
    std::cout << std::endl;

    while (j <= 10)
    {
        m = n * j;
        j++;
        std::cout << m << " ";
    }

    return 0;
}
