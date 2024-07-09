//months quater without repetition
#include <iostream>

int main() 
{
    int month;
    
    std::cout << "Enter month number (1-12)" << std::endl;
    std::cin >> month;

    switch (month) 
    {
        case 1:
        case 2:
        case 3: std::cout << "1st Quarter" << std::endl;  break;
        
        case 4:
        case 5:
        case 6: std::cout << "2nd Quarter" << std::endl;  break;
        
        case 7:
        case 8:
        case 9: std::cout << "3rd Quarter" << std::endl;  break;
        
        case 10:
        case 11:
        case 12: std::cout << "4th Quarter" << std::endl;  break;
        
        default: std::cout << "Invalid input! Please enter a month number between 1-12." << std::endl;
    }
    return 0;
}
