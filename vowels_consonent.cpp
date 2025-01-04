#include <iostream>
using namespace std ;
int main ()
{
    char ch;
    cout << " enter a character : ";
    cin >> ch ;
    if (( ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        char lowerch = tolower( ch);
        if ( lowerch == 'a' || lowerch == 'e' || lowerch == 'i' || lowerch == 'o' || lowerch == 'u')
        {
            cout << ch <<" is a vowel : " << endl;
        }
        else {
            cout << ch <<  " is a consonent : "<< endl;
        }
       } else {
            cout << ch << " is not a valid letter : " << endl;
        }
    }
