#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"\nEnter the number of elements in the array ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"\nAverage of given elements are : "<<(float) sum/n;
    
    return 0;
}