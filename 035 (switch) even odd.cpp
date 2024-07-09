//Even odd
#include <iostream>

int main() 
{
    int a;
    
    std::cout << "Enter a number" << std::endl;
    std::cin >> a;

    switch (a % 2) 
    {
        case 0: std::cout << "Even";
        break;
        default: std::cout << "Odd";
    }
    
    return 0;
}
