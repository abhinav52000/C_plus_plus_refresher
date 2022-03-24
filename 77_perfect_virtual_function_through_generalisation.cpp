#include <iostream>
using namespace std;
class Car
{
public:
    virtual void start() = 0; // This is how pure virtualisation is achieved
};
class Innova : public Car
{
public:
    void start() { cout << "\n\nInnova Started" << endl; }
};
class Swift : public Car
{
public:
    void start() { cout << "\n\nSwift Started" << endl; }
};
int main()
{
    // Car c; -> If a class is made purely virtual then we can not create any of the object of it's type
    Car *p = new Innova();
    p->start();
    p = new Swift();
    p->start();
}