#include<iostream>
using namespace std;
int main()
{
    float frh, cel;
    cout << "input the temperature in farrenhiet : ";
    cin >> frh;
    cel = ((frh * 5.0) -(5.0 * 32)) / 9;
    cout << " the temperatue in celcius :" << cel << endl;
}

