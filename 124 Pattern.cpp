//Star
#include <iostream>

int main() {
    for(int x = 1; x <= 6; ++x) 
    {
        for(int y = 1; y <= 6; ++y) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
