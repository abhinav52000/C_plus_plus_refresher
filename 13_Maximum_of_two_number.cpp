#include<iostream>
using namespace std;
int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int a,b;
    cout<<"\nEnter two numbers ";
    cin>>a>>b;
    cout<<"\nThe larger among the two numbers are "<<max(a,b);
    return 0;
}