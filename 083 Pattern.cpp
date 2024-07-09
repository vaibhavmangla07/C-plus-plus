//Inverted Pattern
#include <iostream>

int main() {
    for(int x = 1; x <= 5; x++)
    {
        for(int y = 1; y < x; y++) 
        {
            std::cout << " ";
        }
        
        for(int z = x; z <= 5; z++)
        {   
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
