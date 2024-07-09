//String pattern
#include <iostream>
#include <string>

int main() {
    std::string name = "YOUR NAME";
    int length = name.length();
    
    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << name[j];
        }
        std::cout << std::endl;
    }
    
    return 0;
}
