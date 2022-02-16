#include <iostream>
using namespace std;
int main()
{
    cout << "\n\nEnter the day number ";
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "\nMonday";
    }
    else if (n == 2)
    {
        cout << "\nTuesday";
    }
    else if (n == 3)
    {
        cout << "\nWednesday";
    }
    else if (n == 4)
    {
        cout << "\nThursday";
    }
    else if (n == 5)
    {
        cout << "\nFriday";
    }
    else if (n == 6)
    {
        cout << "\nSaturday";
    }
    else if (n == 7)
    {
        cout << "\nSunday";
    }
    else
    {
        cout << "\nInvalid day number ";
    }
    return 0;
}