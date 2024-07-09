//Fabonacci Pattern
#include <iostream>

int main() 
{
    int a = 0, b = 1, c = 0;

    for (int i = 1; i <= 5; ++i) 
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout << c << " ";
            c = a + b;
            a = b;
            b = c;
        }
        std::cout << std::endl;
    }

    return 0;
}
