//0-1 pattern
#include <iostream>

int main() 
{
    for (int i = 0; i <= 5; ++i) 
    {
        for (int j = 0; j <= i; ++j) 
        {
            if ((i + j) % 2 == 0) 
            {
                std::cout << "0";
            } else 
            {
                std::cout << "1";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
