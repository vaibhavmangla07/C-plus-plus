//Counted right angled triangle number
#include <iostream>

int main() 
{
    int i, j, k, n;
    std::cout << "Enter Row" << std::endl;
    std::cin >> n;
    k = 1;
    
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            std::cout << k++ << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
