#include <iostream>
using namespace std;
#define max(x, y) (x > y ? x : y)
#define msg(x) #x
#ifndef PI
#define PI 3.1425
#endif
int main()
{
    cout << "\n\n";
    cout << PI;
    cout << "\n\n";
    cout << max(10, 12);
    cout << "\n\n";
    cout << msg(hello) << endl;
    return 0;
}