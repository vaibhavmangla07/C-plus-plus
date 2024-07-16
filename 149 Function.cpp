// Check consonants or vowels
#include <iostream>
using namespace std;

void check(char ch) 
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            {
            cout << ch << " is vowel" << endl;
        }
        else 
        {
            cout << ch << " is Consonant" << endl;
        }
    } 
    else 
    {
        cout << "Invalid input. Please enter a valid alphabet." << endl;
    }
}

int main() {
    char ch;
    
    cout << "Enter a Alphabet : ";
    cin >> ch;
    
    check(ch);
    
    return 0;
}