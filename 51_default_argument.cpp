#include <iostream>
using namespace std;
int sum(int a, int b, int c = 0)
{
    return a + b + c;
}
int main()
{
    cout << sum(10, 20, 3) << endl;
    cout << sum(5, 6); // here value of z is taken from default value that is z = 0
    return 0;
}