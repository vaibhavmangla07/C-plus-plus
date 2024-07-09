//Quad eq.
#include <iostream>
#include <cmath>

int main()
{
    float a, b, c, r1, r2, d;

    std::cout << "Enter the values of a, b, c: ";
    std::cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + std::sqrt(d)) / (2 * a);
        r2 = (-b - std::sqrt(d)) / (2 * a);
        std::cout << "The real roots are: " << r1 << " " << r2 << std::endl;
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        std::cout << "Roots are equal: " << r1 << " " << r2 << std::endl;
    }
    else
    {
        std::cout << "Roots are imaginary" << std::endl;
    }

    return 0;
}
