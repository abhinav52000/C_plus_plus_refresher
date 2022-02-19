#include <iostream>
using namespace std;
int main()
{
    int A[5], sum = 0;
    cout << "\nEnter elements one after another: ";
    for (int x : A)
    {
        cin >> x;
        sum += x;
    }
    cout << "\nSum of each element in this array is " << sum;
    return 0;
}