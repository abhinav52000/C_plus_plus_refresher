#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "\nEnter number to find it's perfect number or not ";
    cin >> n;
    sum = n;
    for (int i = 1; i < (n / 2) + 1; ++i)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n * 2)
    {
        cout << "\nThis is a perfect number";
    }
    else
    {
        cout << "\nThis is not a perfect number";
    }
    return 0;
}