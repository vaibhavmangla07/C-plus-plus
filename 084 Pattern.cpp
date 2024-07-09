//Hollow rectangle
#include <iostream>

int main() {
    for(int x = 1; x <= 5; ++x) 
    {
        for(int y = 1; y <= 5; ++y) 
        {
            if(x == 1 || x == 5 || y == 1 || y == 5) 
            {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
