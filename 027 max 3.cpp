//Max 3
#include <iostream>

int main() 
{
    std::cout << "Enter three numbers" << std::endl;

    int a, b, c;
    std::cin >> a >> b >> c;

    int max = std::max(a, b);
    int Max = std::max(max, c);

    std::cout << "Maximum is : " << Max << std::endl;

    return 0;
}
