//SUM OF EVEN
#include <iostream>

int main()
{
    int i = 2, s = 0;
    
    std::cout << "The first 100 even numbers are ";
   
    while (i <= 100)
    {
        std::cout << i << " ";
        s += i;
        i += 2;
    }
    
    std::cout << "\nSum of first 100 even numbers is " << s << std::endl;

    return 0;
}

