#include <iostream>
using namespace std;
class Base
{
public:
    virtual void fun1() = 0;
    virtual void fun2() = 0;
};
class Derived : public Base
{
public:
    void fun1() { cout << "\n\nFun1 of Derived" << endl; }
    void fun2() { cout << "\n\nFun2 of Derived" << endl; }
};
int main()
{
    // Base b; -> This will show error since here Base class is Abstract class
    Derived d;
    d.fun1();
    d.fun2();
    return 0;
}