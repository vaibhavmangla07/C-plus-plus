//ODD
#include <iostream>

int main()
{
    int i = 1;
    
    std::cout << "The first 100 odd numbers are ";
   
    while (i <= 100)
    {
        std::cout << i << " ";
        i = i + 2;
    }

    return 0;
}
