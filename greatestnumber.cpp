#include<iostream>
using namespace std;
int main ()
{
    int num1, num2;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    if (num1 == num2)
    {
    cout << "both are equal";
    }
    else if (num1 > num2)
    {
    cout << num1 << "is greater than" << num2;
    }
    else
    {
    cout << num2 << " is greater than" << num1;
}
}

