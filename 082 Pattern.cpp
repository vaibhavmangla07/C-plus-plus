//180 ROTATED 
#include <iostream>

int main() {
    for(int x = 1; x <= 5; x++) 
    {
        for(int y = 1; y <= 5 - x; y++) 
        {
            std::cout << " ";
        }
        for(int z = 1; z <= x; z++) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
