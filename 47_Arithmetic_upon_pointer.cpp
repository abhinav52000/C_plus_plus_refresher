#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A, *q = &A[4];

    cout << *p << endl;
    cout << endl;

    p++;
    cout << *p << endl;
    cout << endl;

    p--;
    cout << *p << endl;
    cout << endl;

    cout << p << endl;
    cout << p + 2 << endl;
    cout << endl;

    cout << *p << endl;
    cout << *(p + 2) << endl;
    cout << endl;

    /* This tells how many elements are between these two pointers it donot tell you subtraction of the memory value that you were
    actually expecting it to be.*/
    cout << q << " - " << p << " = " << q - p << endl;
    cout << p << " - " << q << " = " << p - q << endl;
    return 0;
}