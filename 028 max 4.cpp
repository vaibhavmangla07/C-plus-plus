//Max 4
#include <iostream>

int main() 
{
    std::cout << "Enter four number" << std::endl;

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int max = std::max(a, b);
    int Max = std::max(max, c);
    int MAX = std::max(Max, d);

    std::cout <<"Maximum is : "<< MAX << std::endl;

    return 0;
}

