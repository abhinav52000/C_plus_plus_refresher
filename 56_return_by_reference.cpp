#include <iostream>
using namespace std;
int &fun(int &a)
{
    cout << a << endl; // yha to aaya 10 hi
    return a;
}
int main()
{
    int x = 10;
    cout << x << endl;
    fun(x) = 25;
    cout << x;
    return 0;
}