#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "\n\nEnter a number ";
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        sum += pow((n % 10), 3);
        n /= 10;
    }
    if (temp == sum)
    {
        cout << "\n\nThis is an Armstrong number.";
    }
    else
    {
        cout << "\n\nThis is not an Armstrong number.";
    }
    return 0;
}