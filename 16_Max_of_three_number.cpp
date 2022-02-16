#include <iostream>
using namespace std;
int maximum(int x, int y, int z)
{
    if (x >= y)
    {
        if (x >= z)
            return x;
        else
        {
            return z;
        }
    }
    else if(y >= z)
    {
        if (y >= x)
        {
            return y;
        }
        else
        {
            return x;
        }
    }
    else if(z>=y)
    {
        if(z>=x)
        {
            return z;
        }
        else{
            return x;
        }
    }
    return 0;
}
int main()
{
    int a=0, b=0, c=0;
    cout << "\nEnter three number ";
    cin >> a >> b >> c;
    cout << "\nMaximum among these three number is " << maximum(a, b, c);
    return 0;
}