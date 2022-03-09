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
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 50;
    cout << "\n\nPerimeter of the rectangle whose length " << r1.length << " and breadth " << r1.breadth << " is " << r1.perimeter() << " units";
    cout << "\nArea of the rectangle whose length " << r1.length << " and breadth " << r1.breadth << " is " << r1.area() << " square units";
    return 0;
}