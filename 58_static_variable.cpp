#include <iostream>
using namespace std;
void fun()
{
    static int v = 0; // Ye ek bar hi create ho gya uske bad ye nhi ki har barr ane ke bad v=0 karega nhi wo
                      // previous updated se hi suru karta hai you can see this here as well
    int a = 10;
    v++;
    cout << a << "  " << v << endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}