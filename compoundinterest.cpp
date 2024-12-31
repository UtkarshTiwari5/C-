#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double principal, rate, time, compoundinterest;
    int n;
    cout << " enter the principal amount : ";
    cin >> principal;
    cout << "enter the annual intrerest rate (in%): ";
    cin>>rate;
    cout << " enter the time ( in year):";
    cin >> time;
    cout << " enter the number of times interest is compounded per year:";
    cin >> n;
    compoundinterest = principal* pow(( 1 + rate /(100 * n)), n* time) - principal;
    cout << compoundinterest << endl;
}
