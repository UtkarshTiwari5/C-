#include <iostream>
using namespace std;
int main ()
{
    int n , sum=0, odd = 1;
    cout << " enter the number of terms : ";
    cin >> n;
    cout << " the first" <<  n << "odd natural numbers are : \n" ;
    for ( int i = 1; i <= n; ++i)
    {
        cout << odd << " ";
        sum += odd;
        odd+= 2;
    }
    cout << "\n the sum of the first " << n << " odd natural number is: " << sum << endl;

}
