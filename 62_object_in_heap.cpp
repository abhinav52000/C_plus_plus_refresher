#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
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
    // creating an object in stack and accessing through a pointer
    Rectangle r;
    Rectangle *p;
    p = &r;
    p->length = 100;
    p->breadth = 50;
    cout << "\n\nPerimeter of the rectangle whose length " << r.length << " and breadth " << r.breadth << " is " << p->perimeter() << " units";
    cout << "\nArea of the rectangle whose length " << r.length << " and breadth " << r.breadth << " is " << r.area() << " square units";
    // Creating an object in heap here one thing is ki upr mai dot se bhi data acess ho rha hai aur -> se bhi par niche since sirf pointer
    // ke pas access hai hence only -> ke through acess ho skta hai
    Rectangle *r1 = new Rectangle;
    r1->length = 18;
    r1->breadth = 20;
    cout << "\n\nPerimeter of the rectangle whose length " << r1->length << " and breadth " << r1->breadth << " is " << r1->perimeter() << " units";
    cout << "\nArea of the rectangle whose length " << r1->length << " and breadth " << r1->breadth << " is " << r1->area() << " square units";
    // Note: java mai stack mai object bnta hi nhi hai wha sidhe heap mai create hoga.
    return 0;
}