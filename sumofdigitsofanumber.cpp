#include <iostream>
using namespace std;
int main ()
{
    int number , sum = 0 ;
    cout << " enter a number : ";
     cin >> number;
     while ( number != 0) {
        sum += number % 10;
        number /= 10 ;
     }
     cout << " the sum of the  digits is : " << sum << endl;
     
}