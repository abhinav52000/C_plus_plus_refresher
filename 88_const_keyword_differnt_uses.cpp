#include <iostream>
using namespace std;
void display(int const a)
{
    // ++a; -> this will not allow you to update a part of use 5
    cout << "\n\na = " << a;
}
int main()
{
    // use of const keyword.
    // use 1
    const int a = 10; // iska mtlb hai ki a is given scope mai kbhi bhi update nhi ho skta.
    // ++a; -> this statement will show error
    cout << "a = " << a << endl;

    // use 2
    int x = 10;
    int y = 20;
    // int const *ptr=&x; ye ese likho ya niche jo likha hai wese dono ka har ek fnction same hoga.
    const int *ptr = &x;
    // ++(*ptr); -> via direct access of x you can modify the value of x but via pointer you can not modify the value x ot will show error.
    ++x; // this is allowed you can do this by direct acessing the variable nad then through *ptr you can acess updated value;
    ptr = &y;
    cout << x << " " << *ptr;

    // use 3
    int *const ptr1 = &x; // ptr is constant here mtlb ki memory location is fixed ki apne ek bar x pe point kar diya to
    // wo wha sa khi aur point nhi kar skta
    ++(*ptr1); // this is allowed here kyoki memory ko const kiya hai na us data ki memory ko to nhi
    // ptr1=&y; -> this will show error beacuse const ptr hai mtlb fixed hai memory usko chor khi aur nhi point kar skta.
    cout << "\nx = " << x;

    // use 4
    const int *const ptr2 = &x;
    // this maked the data as well as memory location both as constant aab na to ++(*ptr) chlega aur an hi ptr=&y
    // ++(*ptr); ->will show error
    // ptr = &y; ->will show error.
    cout << "\nx = " << *ptr2;

    // use 5
    display(a);
    return 0;
}