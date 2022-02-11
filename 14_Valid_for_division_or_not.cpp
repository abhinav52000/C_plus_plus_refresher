#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "\nEnter two number you want to divide Numerator first ";
    cin >> a;
    cout << "\nNow denominator ";
    cin >> b;
    if (b == 0)
    {
        cout << "\nDenominator can never be 0 \nWrong choice!";
    }
    else
    {
        cout << "\nThe result of this division is " << (float)a/b;
    }
    return 0;
}