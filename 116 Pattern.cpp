//Zig-Zag pattern
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(((i+j)%4==0 || (i==2) && j%4==0))
           {
               std::cout << "*";
           }
               else 
               {
               std::cout << " ";
               }
           }
    
        std::cout << std::endl;
    }
    return 0;
}