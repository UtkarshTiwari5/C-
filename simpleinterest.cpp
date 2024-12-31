#include<iostream>
using namespace std;
int main()
{
    float principal, rate, time, simpleinterest;
    cout<< "enter the principal amount: ";
    cin>> principal;
    cout<< "enter the rate of interest (in %): ";
    cin>> rate;
    cout << "enter the time (in years): ";
    cin >> time;
    simpleinterest = (principal* rate *time) / 100;
    cout<< " the simple interest is : " << simpleinterest << endl;
}



