#include<iostream>
using namespace std;
int main()
{
    string name;
    int a,b;
    cout<<"\n\nEnter your name\t";
    getline(cin,name);
    cout<<"Welcome Dear "<<name
    <<"\n\nEnter two numbers you need to add\t";
    cin>>a>>b;
    cout<<"The value of two entered numbers are\t"<<a+b;
    return 0;
}