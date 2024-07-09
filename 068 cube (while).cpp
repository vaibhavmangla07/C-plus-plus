//CUBE
#include <iostream>

int main()
{
    int n, c = 0, i = 1;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while (i <= n)
    {
        c = i * i * i;
        i++;
    }
    std::cout << "Cube of " << n << " is " << c << std::endl;

    return 0;
}

