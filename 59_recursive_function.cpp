#include<iostream>
using namespace std;
int repeat(int a)
{
    if(a==1)
        return 1;
    cout<<a<<endl;
    return repeat(--a);
}
int main()
{
    cout<<repeat(10);
    return 0;
}