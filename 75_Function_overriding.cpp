#include <iostream>
using namespace std;
class Base
{
public:
    void fun()
    {
        cout << "\nFun of Base is called " << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "\nFun of Derived is called " << endl;
    }
};
int main()
{
    Derived d;
    d.fun();
    return 0;
}