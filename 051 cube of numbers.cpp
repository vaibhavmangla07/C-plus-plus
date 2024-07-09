//cube
#include <iostream>

int main()
{
    int i, c;
    std::cout << "Input number of terms: ";
    std::cin >> c;

    for (i = 1; i <= c; i++)
    {
        std::cout << "Number is: " << i << "\nCube of " << i << " is: " << (i * i * i) << "\n";
    }

    return 0;
}
