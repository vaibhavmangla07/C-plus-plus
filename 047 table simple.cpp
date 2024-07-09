//Table simple 
#include <iostream>

int main()
{
    int j, n, m;
    std::cout << "Input the number" << std::endl;
    std::cout << "(Table to be calculated): ";
    std::cin >> n;
    std::cout << std::endl;

    for (j = 1; j <= 10; j++)
    {
        m = n * j;
        std::cout << m << " ";
    }

    return 0;
}
