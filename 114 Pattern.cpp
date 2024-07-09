//Palindromic Pattern
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            std::cout << "  ";
        }
        
        int k=i;
        for(;j<=n;j++)
        {
            std::cout << k-- << " ";
        }
        
        k=2;
        for( ;j<=n+i-1;j++)
        {
            std::cout << k++ << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}