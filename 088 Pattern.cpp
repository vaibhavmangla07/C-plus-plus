//Reverse counting pattern
#include <iostream>

int main() 
{
    for(int i = 6; i >= 1; --i) 
    {
        for(int j = 6; j >= i; --j)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return 0;
}
