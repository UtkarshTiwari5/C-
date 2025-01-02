#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter an integer is : ";
    cin>> n;
    cout << " cube of a number from  1 to " << n << " are:" << endl;
    for ( int i= 1; i<= n ;i++)
    {
        cout << " cube of " << i << " is " << (i* i * i) << endl;
    }
}
