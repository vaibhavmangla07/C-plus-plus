//SQUARE
#include <iostream>

int main()
{
    int n, sq = 0, i = 1;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while (i <= n)
    {
        sq = i * i;
        i++;
    }
    std::cout << "Square of " << n << " is " << sq << std::endl;

    return 0;
}
