#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
    cout << "\nBefore Swap: " << x << " " << y << endl;
    swap(x, y);
    cout << "After Swap: " << x << " " << y;
    return 0;
}
