#include <iostream>
using namespace std;
template <class T>
T maximum(T x, T y)
{
    return x > y ? x : y;
}
int main()
{
    cout << "\n\n";
    cout << maximum(5, 6);
    cout << "\n\n";
    cout << maximum(5.9, 4.6);
    cout << "\n\n";
    cout << maximum('a', 'b');
    return 0;
}