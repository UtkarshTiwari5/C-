#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout << " enter a character : " ;
    cin >> ch;
    if (( ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is an alphabet " << endl;
    }
    else {
        cout << ch << " is not an alphabet " << endl;
    }
}