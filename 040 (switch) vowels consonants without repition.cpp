//Vowel consonents without repetition
#include <iostream>

int main() 
{
    char ch;
    
    std::cout << "Enter any alphabet: ";
    std::cin >> ch;

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        std::cout << "Vowel";
        break;
    
    default:
        std::cout << "Consonant"; 
    }
    return 0;
}
