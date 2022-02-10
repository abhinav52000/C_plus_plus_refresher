#include<iostream>
using namespace std;
int main()
{
    float base, height,area;
    cout<<"\n\n************** Welcome to program to find area of the triangle **************\n\n\n\nEnter the base of the triangle\t\t";
    cin>>base;
    cout<<"\nEnter the height of the triangle\t";
    cin>>height;
    area=(base*height)/2;
    cout<<"\n\nThe area of the triangle is :"<<area;
    return 0;
}  