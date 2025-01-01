#include <iostream>
using namespace std;
int main()
{
int numsubjects;
double totalmarks = 0, maxmarks ,percentage;
char grade;
cout << "enter the number of subjects: ";
cin >> numsubjects;
cout << "enter the maximum marks for each  subjects: ";
cin >> maxmarks;
double marks[numsubjects];
for (int i = 0; i < numsubjects; i++){
    cout << "enter the marks for subjects " << i+1 <<" :";
    cin>> marks[i];
    totalmarks += marks[i];
    percentage = (totalmarks / (numsubjects * maxmarks)) * 100;
}
if (percentage >= 90)
{
    grade = 'A';
}
else if (percentage >= 80)
{
    grade = 'B';
}
else if (percentage >= 70)
{
    grade = 'C';
}
else if (percentage >= 60)
{
    grade = 'D';
}
else {
    grade = 'F';
}
cout << "total marks: " <<totalmarks << "/" << (numsubjects * maxmarks) <<endl ;
cout << "percentage:"<< percentage << "%" << endl;
cout << "grade: "<< grade << endl;
}


        

        
        
        

        

