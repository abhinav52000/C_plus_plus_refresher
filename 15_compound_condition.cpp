#include<iostream>
using namespace std;
int main()
{
    int enter_your_time;
    cout<<"\nEnter the current time ";
    cin>>enter_your_time;
    if((enter_your_time>0&&enter_your_time<9)||(enter_your_time>18 && enter_your_time<23))
    {
        cout<<"\nIt is time to enjoy chill";
    }
    else{
        cout<<"\nTime to work sincerly";
    }
    return 0;
}