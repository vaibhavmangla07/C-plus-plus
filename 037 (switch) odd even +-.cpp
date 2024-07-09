//odd even +-
#include <iostream>

int main() 
{
    int a;
    
    std::cout << "Enter a number" << std::endl;
    std::cin >> a;

    if (a >= 0) 
    {
        std::cout << "Number is positive" << std::endl;

        switch (a % 2)
        {
            case 0: std::cout << "Even" << std::endl; 
            break;
            case 1: std::cout << "Odd" << std::endl; 
            break;
        }
    } 
    else 
    {
        std::cout << "Number is negative" << std::endl;
    }
    
    return 0;
}
