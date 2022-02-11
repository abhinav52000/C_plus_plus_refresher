#include<iostream>
using namespace std;
int main()
{
    int store=0,update;
    char operation;
    l:
    cout<<"\n\nEnter the value to update  ";
    cin>>update;
    m:
    cout<<"\nThe operatoin to perform ";
    cin>>operation;
    switch (operation){
    case '+':
    store+=update;
    cout<<"\nThe value after update is "<<store;
    break;
    case '-':
    store-=update;
    cout<<"\nThe value after update is "<<store;
    break;
    case '*':
    store*=update;
    cout<<"\nThe value after update is "<<store;
    break;
    case '/':
    store/=update;
    cout<<"\nThe value after update is "<<store;
    break;
    case '%':
    store%=update;
    cout<<"\nThe value after update is "<<store;
    break;
    default:
    cout<<"\n\nWrong choice\nEnter again";
    goto m;
    break;
}
goto l;
    return 0;
}