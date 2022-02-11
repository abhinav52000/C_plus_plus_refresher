#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,x1,x2;
    cout<<"\n\n\n\nEnter the coefficients of Quadratic equation";
    cout<<"\n\nEnter the coefficient of x^2\t";
    cin>>a;
    cout<<"\nEnter the coefficient of x\t";
    cin>>b;
    cout<<"\nEnter the constant term if any \t";
    cin>>c;
    cout<<"You enterd:\t"<<a<<"x^2 + "<<b<< "x + "<<c;
    int D=pow(b,2)-(4*a*c);
    if(D>=0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"The root of this equation:\t"<<a<<"x^2 + "<<b<< "x + "<<c<<"are :\t "<<x1<<" and "<<x2;

    }
    else
    {
    
        cout<<"The root of this equation:\t"<<a<<"x^2 + "<<b<< "x + "<<c<<"are :\t "<<(-b)/(2*a)<<" + "<<sqrt((-1*D))/(2*a)<<"i"<<" and "<<(-b)/(2*a)<<" - "<<sqrt((-1*D))/(2*a)<<"i";;
    }
    return 0;
}