//Vowel consonents
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Alphabet is a vowel";
    }
    else
    {
        cout << "Alphabet is a consonant";
    }

    return 0;
}
