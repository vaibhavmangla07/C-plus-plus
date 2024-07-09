//0-1 Pattern 
#include <iostream>

int main() 
{
    int x;
    
    for (int i = 1; i <= 5; ++i) 
    {
        if (i % 2 == 0) 
        {
            x = 1;
        }
        else
        {
            x = 0;
        }

        for (int j = 1; j <= i; ++j)
        {
            std::cout << x;
        }

        if (x == 1) 
        {
            x = 0;
        }
        else
        {
            x = 1;
        }

        std::cout << std::endl;
    }
    return 0;
}
