//Rectangle Star Pattern
#include <iostream>

int main()
{
    int r,c;
    std::cout << "Enter Rows" << std::endl;
    std::cin >> r;
    std::cout << "Enter Column" << std::endl;
    std::cin >> c;
    
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<=c;j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
