#include <iostream>
using namespace std;
class Rectangle
{
    int length, breadth;

public:
    void setlength(int a)
    {
        if (a > 0)
        {
            length = a;
        }
        else
        {
            cout << "\nInvalid parameter passed try again.";
            length = 0;
        }
    }
    void setbreadth(int a)
    {
        if (a > 0)
        {
            breadth = a;
        }
        else
        {
            cout << "\nInvalid parameter passed try again";
            breadth = 0;
        }
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1;
    int a, b;
    int i = 0;
l:
    cout << "\n\n\nEnter length and breadth: ";
    cin >> a >> b;
    r1.setlength(a);
    r1.setbreadth(b);
    cout << "\n\nPerimeter of the rectangle whose length " << r1.getlength() << " and breadth " << r1.getbreadth() << " is " << r1.perimeter() << " units";
    cout << "\nArea of the rectangle whose length " << r1.getlength() << " and breadth " << r1.getbreadth() << " is " << r1.area() << " square units";
    if (i < 3)
    {
        ++i;
        goto l;
    }
    return 0;
}