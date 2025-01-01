# include <iostream>
using namespace std;
    double calculatearea(double diagonal1 , double diagonal2) {
        return (diagonal1 * diagonal2) / 2;
    }
    int main ()
    {
        double d1 ,d2;
        cout << "enter the length of the first diagonal: ";
        cin >> d1;
        cout << " enter the length of the second diagonal: ";
        cin >> d2;
        double area = calculatearea(d1 ,d2);
        cout << " the area of rhombus is: " << area << endl;

    }



    





















