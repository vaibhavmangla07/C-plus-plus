//Grades
#include <iostream>

int main()
{
    int a;
    std::cout << "Enter your marks: ";
    std::cin >> a;

    if (a < 40)
    {
        std::cout << "Fail";
    }
    else if (a >= 40 && a < 50)
    {
        std::cout << "Third";
    }
    else if (a >= 50 && a < 60)
    {
        std::cout << "Second";
    }
    else if (a >= 60 && a < 80)
    {
        std::cout << "First";
    }
    else
    {
        std::cout << "Merit";
    }

    return 0;
}
