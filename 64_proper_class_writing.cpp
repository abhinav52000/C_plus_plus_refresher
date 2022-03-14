#include <iostream>
using namespace std;
class Rectangle
{
    int len, bre;

public:
    // Constuctor first.
    // I am defining first within the calss but this is what not a good practise suggest to do.
    // In class you only have declearation and definition is outside class using scope resolution.
    Rectangle(int l = 0, int b = 0)
    {
        len = l;
        bre = b;
    }
    Rectangle(Rectangle &R);
    // Mutator-used to update the value of data type
    void setlen(int a);
    void setbre(int a);
    // Accessor - used to get the stored data value
    int getlen();
    int getbre();
    // Facilitator'
    int area();
    int perimeter();
    // Enquiry
    bool is_square();
    // Destructor - It is called automatically no need to write to implement this and destruct wo phle hoga jo bad mai aaya hai
    // It is like a stack ki decleare sabse phle jise kiya wo sabse akhir mai sestruct hoga
    ~Rectangle();
};
Rectangle ::Rectangle(Rectangle &R)
{
    len = R.len;
    bre = R.bre;
}
void Rectangle ::setlen(int a)
{
    len = a;
}
void Rectangle ::setbre(int a)
{
    bre = a;
}
int Rectangle::getlen()
{
    return len;
}
int Rectangle::getbre()
{
    return bre;
}
int Rectangle::area()
{
    return len * bre;
}
int Rectangle::perimeter()
{
    return 2 * (len + bre);
}
Rectangle::~Rectangle()
{
    cout << "\nRectangle object destroyed";
}
bool Rectangle::is_square()
{
    if (len == bre)
        return true;
    else
        return false;
}

int main()
{
    Rectangle r(9, 9);
    cout << "\n\nArea of rectangle whose length " << r.getlen() << " and breadth " << r.getbre() << " will be: " << r.area() << "\n";
    cout << "\nPerimeter of rectangle whose length " << r.getlen() << " and breadth " << r.getbre() << " will be: " << r.perimeter() << "\n";
    cout << "\nWeather of rectangle whose length " << r.getlen() << " and breadth " << r.getbre() << " is square or not: " << r.is_square() << "\n";
    Rectangle r1(10, 5);
    cout << "\n\nArea of rectangle whose length " << r1.getlen() << " and breadth " << r1.getbre() << " will be: " << r1.area() << "\n";
    cout << "\nPerimeter of rectangle whose length " << r1.getlen() << " and breadth " << r1.getbre() << " will be: " << r1.perimeter() << "\n";
    cout << "\nWeather of rectangle whose length " << r1.getlen() << " and breadth " << r1.getbre() << " is square or not: " << r1.is_square() << "\n";
    return 0;
}