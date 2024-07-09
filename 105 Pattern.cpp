//Inverted Half Pyramid
#include <iostream>

int main()
{
    int r,c;
    std::cout << "Enter Rows" << std::endl;
    std::cin >> r;
    std::cout << "Enter Column" << std::endl;
    std::cin >> c;
    
    for(int i=r;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
