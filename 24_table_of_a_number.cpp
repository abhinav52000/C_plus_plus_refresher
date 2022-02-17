#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number whose table you need ";
    cin >> n;
    cout << "\n\n  TABLE\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << "\n"
             << n << " X " << i << " = " << n * i;
    }
    return 0;
}