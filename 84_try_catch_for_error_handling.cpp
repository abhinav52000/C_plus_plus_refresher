#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 0;
    cout << "\n\n";
    try
    {
        if (b == 0)
        {
            throw 101; // 1 is nothing but an error code type ike hota hai na ki error 104.4
        }
        cout << a / b;
    }
    catch (int e)
    {
        cout << "\nDenominator can never be 0 \n\nError code: " << e;
    }
    cout << "\n\nJob done";
    return 0;
}