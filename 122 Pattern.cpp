//Star
#include <iostream>

int main() {
    for(int x = 1; x <= 6; ++x) 
    {
        for(int y = 1; y <= x; ++y)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
