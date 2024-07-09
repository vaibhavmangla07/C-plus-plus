//Palidrome
#include <iostream>

int main()
{
    int n, c, r, s = 0;
    
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    c = n;
    
    while (n > 0)
    {
        r = n % 10;
        s = r + (s * 10);
        n = n / 10;
    }
    
    if (c == s)
    {
        std::cout << c << " is a palindrome number" << std::endl;
    }
    else
    {
        std::cout << c << " is not a palindrome number" << std::endl;
    }

    return 0;
}
