#include <iostream>
using namespace std;
int calculateHCF(int a, int b) {
    while (b !=0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main () {
    int num1, num2;
    cout << " enter the first number : ";
    cin >> num1;
    cout << " enter the second number: ";
    cin >> num2;
    int hcf = calculateHCF(num1, num2);
    cout << " The HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;
}