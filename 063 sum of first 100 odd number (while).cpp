// SUM OF ODD
#include <iostream>

int main()
{
    int i = 1, s = 0;
    
    std::cout << "The first 100 odd numbers are ";
   
    while (i <= 100)
    {
        std::cout << i << " ";
        s += i;
        i += 2;
    }
    
    std::cout << "\nSum of first 100 odd numbers is " << s << std::endl;

    return 0;
}

