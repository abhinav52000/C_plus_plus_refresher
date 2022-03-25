#include <iostream>
using namespace std;
template <class T> // here the meaning is ki T will denote whatever data type it will encounter while execution.
T maximum(T x, T y)
// this means ki jo bhi return type hai input data type ahi sab ka data type ek hi hai aur generalised mai use hm T kh rhe hai
{
    return x > y ? x : y;
}
template <class A, class B>
void add(A x, B y)
// This shows ki yar tum multiple data type le skte ho yha aur yha return type defined hi hai that is void.
// Haa one more thing ki data type jo hai wo same bhi ho skte hai wo error nhi throw karega us case mai.
// par alg hue to bhi nhi karega hmara ye objective hai.
{
    cout << "\n\nSum of this number is " << x + y;
}
int main()
{
    cout << "\n\n";
    add(5, 6);
    cout << maximum(5, 6);
    add(5, 6.95);
    cout << "\n\n";
    cout << maximum(5.9, 4.56);
    add(5.9, 8.22);
    cout << "\n\n";
    cout << maximum('a', 'b');
    return 0;
}