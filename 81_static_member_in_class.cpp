#include <iostream>
using namespace std;
class Test
{
public:
    int a;
    static int count;
    Test()
    {
        a = 10;
        count++;
    }
    static int getCount() { return count; }
};
int Test::count = 0;
int main()
{
    Test t1, t2;
    cout << Test::getCount() << endl; // bina object create kare hi acess karna chaho to ye kar skte ho ese
    cout << t1.getCount() << endl;    // and even object create kar ke bhi ese access kar skte ho
    // but the thing is ki apne do object bnaya count = 2 ho gya aur yhi sab ke pas hai even t1 ke pas bhi t2 ke pas bhi
    return 0;
}