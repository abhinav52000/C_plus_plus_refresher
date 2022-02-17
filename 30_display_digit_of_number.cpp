#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n\nEnter a number ";
    cin>>n;
    cout<<"\n\nThis number " <<n<<" contains: ";
    while(n>0)
    {
        cout<<n%10<<" ";
        n/=10;
    }
    return 0;
}