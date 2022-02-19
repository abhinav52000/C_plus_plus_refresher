#include <iostream>
using namespace std;
int main()
{
    int A[5], max = INT32_MIN;
    cout << "\nEnter elements one after another: ";
    for (int x : A)
    {
        cin >> x;
        if (max < x)
        {
            max = x;
        }
    }
    cout << "\nMaximum number among all in this array is " << max;
    return 0;
}