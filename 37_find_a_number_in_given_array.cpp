#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 4, 6, 8, 10, 12, 16, 14, 18, 20}, key;
    bool test = false;
    cout << "\nEnter the element you need to find in the given array: ";
    cin >> key;
    for (int x : A)
    {
        if (key == x)
        {
            test = true;
        }
    }
    if (test)
    {
        cout << "\nElement found";
    }
    else
    {
        cout << "\nElement not found";
    }
    return 0;
}