//Tribonacci
#include <iostream>

int main()
{
    long int i, a = 0, b = 1, c = 1, d;
    std::cout << "\nThe first 20 Tribonacci numbers are: 0 1 1 ";

    for (i = 0; i < 17; i++) 
    {
        d = a + b + c;
        std::cout << d << " ";
        a = b;
        b = c;
        c = d;
    }

    return 0;
}

