#include<iostream>
using namespace std;
int main()
{
    float basic,allowance,deduct,netsalary;
    cout<<"\nEnter the basic allowed to you ";
    cin>>basic;
    cout<<"\nEnter the net allowance from your basics ";
    cin>>allowance;
    cout<<"\nEnter the net Deduct percentage from your basics ";
    cin>>deduct;
    netsalary=basic+(basic*allowance*0.01)-(basic*deduct*0.01);
    cout<<"\n\nYour net salary is: "<<netsalary;
    return 0;
}