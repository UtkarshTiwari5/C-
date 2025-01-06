#include <iostream>
 using namespace std;
 int main (){
    int n;
    cout << " enter the number of elements  in the array: ";
    cin >> n;
    int arr[n];
    cout << " enter the elements of the array: ";
    for ( int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0; for ( int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << " The sum of the array elements is: " << sum << endl;
 }