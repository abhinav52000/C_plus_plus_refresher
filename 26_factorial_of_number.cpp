#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "\nEnter number ";
    cin >> n;
    for (int i = n; i > 0; --i)
    {
        fact *= i;
    }
    cout << "\n\nFactorial of this number is " << fact << "\n";

    return 0;
}