//Discount
#include <iostream>

int main()
{
    int a, b, c, d, e;
    std::cout << "Enter amount to get discount: ";
    std::cin >> a;

    if (a < 1000)
    {
        std::cout << "No discount";
    }
    else if (a >= 1000 && a < 2500)
    {
        std::cout << "15%\n";
        b = a * 15.0 / 100;
        std::cout << b;
    }
    else if (a >= 2500 && a < 5000)
    {
        std::cout << "30%\n";
        c = a * 30.0 / 100;
        std::cout << c;
    }
    else if (a >= 5000 && a < 10000)
    {
        std::cout << "50%";
        d = a * 50.0 / 100;
        std::cout << d;
    }
    else
    {
        std::cout << "60%";
        e = a * 60 / 100;
        std::cout << e;
    }

    return 0;
}
