#include <iostream>
using namespace std;
namespace first
{
    void fun()
    {
        cout << "\nUsed me first";
    }
}
// if you won't have used namespace to wo compile karne mai error show karega
namespace second
{
    void fun()
    {
        cout << "\nCheater you used me now";
    }
}
using namespace first;
int main()
{
    fun(); // by default hai
    // aur agr upr mai using namepace first nhi likha hota to you can acess fun of first as follow
    first::fun();
    second::fun();
    return 0;
}