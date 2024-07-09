//EVEN
#include <iostream>

int main()
{
    int i = 2;
    
    std::cout << "The first 100 even numbers are ";
   
    while (i <= 100)
    {
        std::cout << i << " ";
        i = i + 2;
    }

    return 0;
}
