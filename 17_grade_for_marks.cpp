#include <iostream>
using namespace std;
typedef int marks;
int main()
{
    marks m1, m2, m3, average;
    cout << "\nEnter the marks of three subjects oone by one ";
    cin >> m1 >> m2 >> m3;
    average = (m1 + m2 + m3) / 3;
    if (average <= 100 && average > 60)
    {
        cout << "\nYour grade is A with an average of "<<average;
    }
    else if (average <= 60 && average > 35)
    {
        cout << "\nYour grade is B with an average of "<<average;
    }
    else if (average <= 35 && average >=0)
    {
        cout << "\nYour grade is C with an average of "<<average<<"\nYou have a potential try something new";
    }
    else
    {
        cout<<"\nThis is a wrong input";
    }
    return 0;
}