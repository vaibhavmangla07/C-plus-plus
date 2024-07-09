//SUM AND MEAN
#include <iostream>

int main() 
{
    int a = 1, i, n, s = 0, m = 0, count = 0;
    
    while (a == 1) 
    {
        std::cout << "Enter a number: ";
        std::cin >> n;

        s = s + n;
        count++;
        m = s / count;
        

        std::cout << "To enter another number, press 1 / To stop, press 0: ";
        std::cin >> a;
    }
        
        std::cout << "Sum is " << s << std::endl;
        
        std::cout << "Mean is " << m << std::endl;
    return 0;
}
