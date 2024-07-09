//Character
#include <iostream>

int main() 
{
    for (char i = 'A'; i <= 'F'; ++i) 
    {
        for (char j = 'A'; j <= i; ++j) 
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return 0;
}
