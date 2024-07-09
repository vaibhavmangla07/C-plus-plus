//Reverse counted number 1234
#include <iostream>

int main() 
{
    int k = 1;
    for(int i = 1; i <= 6; ++i) 
    {
        for(int j = 1; j <= i; ++j) 
        {
            std::cout << k++ << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
