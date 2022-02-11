#include <iostream>
using namespace std;
enum day
{
    mon,
    tue,
    wed = 5,
    thur,
    fri,
    sat,
    sun = 10
};
int main()
{
    day Abhinav;
    Abhinav = mon;
    cout << Abhinav << endl;
    Abhinav=tue;
    cout << Abhinav << endl;
    Abhinav=wed;
    cout << Abhinav << endl;
    Abhinav=thur;
    cout << Abhinav << endl;
    Abhinav=fri;
    cout << Abhinav << endl;
    Abhinav=sat;
    cout << Abhinav << endl;
    Abhinav=sun;
    cout << Abhinav << endl;
    return 0;
}