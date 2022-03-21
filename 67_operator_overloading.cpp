#include <iostream>
using namespace std;
class complex
{
public:
    int real, img;

    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    complex operator+(complex c) // yha operator+ shows ki + ek operator hai jisko tum yha overload karo.
    {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main()
{
    complex c1(5, 2);
    complex c2(3, -8);
    complex c3;
    c3 = c1 + c2;
    cout << "Addition of two number is: " << c3.real << " + " << c3.img << " i";
    return 0;
}