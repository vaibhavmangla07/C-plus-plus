//Star
#include <iostream>

int main() 
{
    for(int x = 1; x <= 5; ++x) 
    {
        for(int y = 5; y >= x; --y) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
