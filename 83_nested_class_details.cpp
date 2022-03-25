#include <iostream>
using namespace std;
class Outer
{
public:
    int a;
    static int b;
    void fun() // we can access all the features as allopwed to object of class in the ouutter class of inner class object.
    {
        i.show();
        cout << i.x;
    }
    class Inner
    {
    public:
        int x = 26;
        void show()
        {
            cout << b << endl; // inner class can access only static members of the outter class and no outter calss object can be created within inner class
        }
    };
    Inner i; // no matter bad mai hi object bnaya aap phle bhi use kar lo bas ye important hai ki apne object bna na hai aur object hmesa
    // class ke declearation ke bad hi bnta hai
};
int Outer ::b = 20;
int main()
{
    Outer o1;
    o1.fun();
    return 0;
}