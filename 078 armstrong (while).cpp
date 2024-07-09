//ARMSTRONG
#include <iostream>

int main()
{
    //input 153 ----> 1*1*1 + 5*5*5 + 3*3*3 = 153
    int n, c, r, arm = 0;
    
    std::cout << "Enter a number: ";
    std::cin >> n;
    c = n;
    
    while (n > 0)
    {
        r = n % 10;
        arm = arm + (r * r * r);
        n = n / 10;
    }
    
    if (c == arm)
    {
        std::cout << c << " is an Armstrong number" << std::endl;
    }
    else
    {
        std::cout << c << " is not an Armstrong number" << std::endl;
    }

    return 0;
}
