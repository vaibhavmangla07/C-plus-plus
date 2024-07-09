//sq.
#include <iostream>

int main()
{
    int i, sq;
    std::cout << "Input number of terms: ";
    std::cin >> sq;

    for (i = 1; i <= sq; i++)
    {
        std::cout << "Number is: " << i << "\nSquare of " << i << " is: " << (i * i) << "\n";
    }

    return 0;
}
