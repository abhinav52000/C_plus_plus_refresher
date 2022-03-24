#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "\nDefault of base is called";
    }
    base(int x)
    {
        cout << "\nParametrised of base is called " << x;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "\nDefault of derived is called";
    }
    derived(int x)
    {
        cout << "\nParametrised of derived is called " << x;
    }
    derived(int x, int a) : base(a)
    {
        cout << "\nParametrised of derived is called " << x;
    }
};
int main()
{
    derived d; // both default are called
    cout << "\n\n";
    derived d1(50); // default of base is called and the parametrised of derived
    cout << "\n\n";
    derived d2(50, 200); // parameterised of base is called and the parametrised of derived is also called
    return 0;
}