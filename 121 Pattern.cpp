//(0-1)Pattern
#include <iostream>

int main() 
{

    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= i; j++)
        {
            if((i+j)%2!=0)
            {
                std::cout << "1";
            }
            else
            {
                std::cout << "0";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
