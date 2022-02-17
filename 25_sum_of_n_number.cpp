#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "\nEnter the length of natural number ";
    cin >> n;
    for (int i = 1; i < n + 1; ++i)
    {
        sum += i;
    }
    cout << "\nThe sum of " << n << " natural number is: " << sum;
    return 0;
}