//String Pattern
#include <iostream>
#include <cstring> // for strlen()

int main() {
    const char* name = "PROGRAMMING IN C++"; 
    int length = std::strlen(name); 

    for (int i = 0; i < length; ++i) 
    {
        for (int j = 0; j <= i; ++j) 
        {
            std::cout << name[j]; 
        }
        std::cout << std::endl;
    }

    return 0;
}
