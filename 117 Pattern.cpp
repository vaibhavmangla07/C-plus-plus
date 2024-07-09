//Fibonacci sequence in a triangular pattern
#include <iostream>

int main() 
{
    int i, j, a = 0, b = 1, c = 0;
    std::cout << a << std::endl;
    
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            std::cout << c << ' ';
            c = a + b;
            b = a;
            a = c;
        }
        std::cout << std::endl;
    }
    
    return 0;
}
