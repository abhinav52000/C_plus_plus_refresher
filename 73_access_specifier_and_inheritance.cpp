#include <iostream>
using namespace std;
class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funBase()
    {
        a = 10;
        b = 5;
        c = 15;
        cout << "\n\n"
             << a << " " << b << " " << c << " job done";
    }
};
class Derived : public Base
{
public:
    void funDerived()
    {
        // a = 10; -> will show error since it is private in base class
        // But it can acess protected and public
        b = 5;
        c = 15;
    }
};
int main()
{
    Base b;
    // object of base can only acess public data member
    //  b.a = 10;  -> will show error
    //  b.b = 5;  -> will show error
    b.c = 20;
    Derived d;
    d.funBase();
    return 0;
}