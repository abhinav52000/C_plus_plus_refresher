#include <iostream>
#include<math.h>
using namespace std;
void binary(int a[10], int k, int size)
{
    
    int top=0,end=size,test=0;
    do
    {
        int mid=floor(end+top)/2;
        if(k==a[mid])
        {
            cout<<"\nElement found";
            test=1;
            break;
        }
        else if(k>a[mid])
        {
            top=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }while(top<=end);
    if(test==0)
    {
        cout<<"\nElement not found";
    }
}
int main()
{
    int lists[10]={2,4,6,8,10,12,14,16,18,20},num;
    int size=sizeof(lists)/sizeof(lists[0])-1;
    cout<<"\nEnter the element to search: ";
    cin>>num;
    binary(lists,num,size);
    return 0;
}