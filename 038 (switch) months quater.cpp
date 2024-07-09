//months quater
#include <iostream>

int main() 
{
    int month;
    
    std::cout << "Enter month number (1-12)" << std::endl;
    std::cin >> month;

    switch (month) 
    {
        case 1: std::cout << "1st Quarter" << std::endl; break;
        case 2: std::cout << "1st Quarter" << std::endl; break;
        case 3: std::cout << "1st Quarter" << std::endl; break;

        case 4: std::cout << "2nd Quarter" << std::endl; break;
        case 5: std::cout << "2nd Quarter" << std::endl; break;
        case 6: std::cout << "2nd Quarter" << std::endl; break;

        case 7: std::cout << "3rd Quarter" << std::endl; break;
        case 8: std::cout << "3rd Quarter" << std::endl; break;
        case 9: std::cout << "3rd Quarter" << std::endl; break;
        
        case 10: std::cout << "4th Quarter" << std::endl; break;
        case 11: std::cout << "4th Quarter" << std::endl; break;
        case 12: std::cout << "4th Quarter" << std::endl; break;
        
        default: std::cout << "Invalid input! Please enter a month number between 1-12." << std::endl;
    }
    return 0;
}
