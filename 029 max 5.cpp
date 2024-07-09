//Max 5
#include <iostream>

int main() 
{
    std::cout << "Enter five numbers" << std::endl;

    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;

    int max1 = std::max(a, b);
    int max2 = std::max(c, d);
    int max3 = std::max(max1, max2);
    int Max = std::max(max3, e);

    std::cout << "Maximum is : " << Max << std::endl;

    return 0;
}
