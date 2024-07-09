//Cal.
#include <iostream>

int main() 
{
    char ch;
    float a, b, c;

    std::cout << "Enter an operator (1=+), (2=-), (3=/), (4=*)" << std::endl;
    std::cin >> ch;

    std::cout << "Enter two numbers" << std::endl;
    std::cin >> a >> b;

    switch (ch) 
    {
        case '1':
            c = a + b;
            std::cout << "Addition of two numbers is " << c;
            break;
        case '2':
            c = a - b;
            std::cout << "Subtraction of two numbers is " << c;
            break;
        case '3':
            if (b != 0)
            {
                c = a / b;
                std::cout << "Division of two numbers is " << c;
            }
            else 
            {
                std::cout << "Division by zero is not allowed";
            }
            break;
        case '4':
            c = a * b;
            std::cout << "Multiplication of two numbers is " << c;
            break;
        default:
            std::cout << "Invalid operator";
    }

    return 0;
}
