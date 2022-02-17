#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter number to find it's factor ";
    cin>>n;
    cout<<"\nThe factors of "<<n<<" are ";
    for(int i=1;i<(n/2)+1;++i)
    {
        if(n%i==0)
        {
            cout<<i<<", ";
        }
    }
    cout<<n;
    return 0;
}