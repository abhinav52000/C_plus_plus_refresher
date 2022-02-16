#include <iostream>
using namespace std;
int main()
{
    cout << "\nEnter the year ";
    int year;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "\nThis year " << year << " is a leap year.\n";
    }
    else
    {
        cout << "\nThis year " << year << " is not a leap year.\n";
    }
    
    return 0;
}