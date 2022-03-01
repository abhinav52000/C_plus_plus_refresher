#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *p;    // decleration
    p = &a;    // referencing
    cout << p; // derefrencing

    /* For array in heap
    // int *p= new int[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>p[i];
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<p[i]<<endl;
    // }
    */

    return 0;
}