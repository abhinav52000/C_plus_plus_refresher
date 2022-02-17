#include <iostream>
using namespace std;
int main()
{
    int n, check = 0;
    cout << "\nEnter number to check for prime ";
    cin >> n;
    for (int i = 2; i < (n / 2) + 1; ++i)
    {
        if (n % i == 0)
        {
            check = 1;
            cout << "\nThis is not a prime number";
            break;
        }
    }
    if (check == 0)
    {
        cout << "\nThis is a prime number";
    }
    return 0;
}