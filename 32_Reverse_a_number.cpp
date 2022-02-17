#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, reversed_number;
    cout << "\n\nEnter a number ";
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        reversed_number = (reversed_number * 10) + (n % 10);
        n /= 10;
    }
    cout << "\n\nReversal of " << temp << " is " << reversed_number;
    return 0;
}