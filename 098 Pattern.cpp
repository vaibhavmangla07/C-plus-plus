//Alphabet Pattern
#include <iostream>

int main() 
{
    char count = 'A';
    
    for (char i = 'A'; i <= 'E'; ++i) 
    {
        for (char j = 'A'; j <= i; ++j)
        {
            std::cout << count++;
        }
        std::cout << std::endl;
    }
    return 0;
}
