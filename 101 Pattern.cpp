//EQ. triangle star pattern with spacing
#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) 
    {
        for (int j = 5; j > i; --j) 
        {
            std::cout << " ";
        }

        for (int k = 1; k <= i; ++k) 
        {
            std::cout << "*";
            if (k < i) 
            {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
