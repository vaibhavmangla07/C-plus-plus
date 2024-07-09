//Vowel consonents
#include <iostream>

int main() 
{
    char ch;
    
    std::cout << "Enter any alphabet: ";
    std::cin >> ch;

    switch(ch)
    {
    case 'a': std::cout << "Vowel" << std::endl; break;
    case 'e': std::cout << "Vowel" << std::endl; break;
    case 'i': std::cout << "Vowel" << std::endl; break;
    case 'o': std::cout << "Vowel" << std::endl; break;
    case 'u': std::cout << "Vowel" << std::endl; break;
    case 'A': std::cout << "Vowel" << std::endl; break;
    case 'E': std::cout << "Vowel" << std::endl; break;
    case 'I': std::cout << "Vowel" << std::endl; break;
    case 'O': std::cout << "Vowel" << std::endl; break;
    case 'U': std::cout << "Vowel" << std::endl; break;
        
    default: std::cout << "Consonant" << std::endl; 
    }
    return 0;
}
