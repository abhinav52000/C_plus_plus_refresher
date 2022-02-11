#include <iostream>
using namespace std;
int main()
{
    char a = 128;
    cout << (int)a << endl;
    char b = 127;
    b++;
    cout << (int)b << endl;
    char c = -129;
    cout << (int)c << endl; // This automatically gives you 127. -129 means 127
    char d = -128;
    d--;
    cout << (int)d << endl;
    int e = INT_MAX;
    e++;
    cout << (int)e << endl; // same is done for int, long, long int, and many other data type
    return 0;
}