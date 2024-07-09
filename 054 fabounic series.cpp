//Fibonacci
#include <iostream>

int main()
{
    int i, a, b, c;
    a = 0;
    b = 1;
    c = 0;
    std::cout << "\nThe first 20 Fibonacci numbers are:";
    
    for (i = 1; i <= 20; i++)
    {
        std::cout << c << " ";
        c = a + b;
        b = a;
        a = c;
    }

    return 0;
}
