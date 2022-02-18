#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int n, reversed_number;
    cout << "\n\nEnter a number ";
    cin >> n;
    long int temp = n;
    while (n > 0)
    {
        reversed_number = (reversed_number * 10) + (n % 10);
        n /= 10;
    }
    if (temp == reversed_number)
    {
        cout << "\t"
             << "\nThis is an Palindrome";
    }
    else
    {
        cout << "\t"
             << "\nThis is not an Palindrome";
    }
    return 0;
}
