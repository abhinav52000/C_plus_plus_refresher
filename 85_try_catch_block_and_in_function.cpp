#include <iostream>
using namespace std;
int division(int a, int b)
// ye puri trh optional hai btana aur naye wle versions mai ye chlta bhi nhi hai it will show you error
{
    if (b == 0)
        throw 1.23;
    return a / b;
}
int main()
{
    int x = 10, y = 0, z;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (double e)
    {
        cout << "Division by zero " << e << endl;
    }
    cout << "Bye" << endl;
}