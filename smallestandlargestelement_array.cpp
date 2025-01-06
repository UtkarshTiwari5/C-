#include <iostream>
#include <climits>
using namespace std;
void findsmallestandlargest( int arr[], int size, int &smallest, int & largest) {
    smallest = INT_MAX;
    largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if ( arr[i] > largest) {
            largest = arr[i];
        }
    }
}
int main() {
    int n;
    cout << " enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << " enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int smallest, largest;
    findsmallestandlargest(arr, n, smallest, largest);
    cout << " smallest element: " << smallest << endl;
    cout << " largest element: " << largest << endl;
}