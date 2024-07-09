//USER REPEAT
#include <iostream>

int main() {
    char another = 'y';
    int num;

    while (another == 'y') 
    {
        std::cout << "Enter a number: ";
        std::cin >> num;
        std::cout << "Square of " << num << " is " << num * num << std::endl;
        std::cout << "Cube of " << num << " is " << num * num * num << std::endl;
        std::cout << "Want to enter another number? (y/n) ";
        std::cin >> another;
    }

    return 0;
}
