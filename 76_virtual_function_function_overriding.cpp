#include <iostream>
using namespace std;
class BasicCar
{
public:
    void makecar() { cout << "Basic car created"; }
    virtual void start() { cout << "Basic Car started" << endl; }
};
class AdvanceCar : public BasicCar
{
public:
    void makecar() { cout << "Advance car created"; }
    void start() { cout << "Advance Car Started" << endl; }
};
int main()
{
    BasicCar *p = new AdvanceCar();
    cout << "\n\n";
    p->makecar();
    cout << "\n\n";
    p->start();
    cout << "\n\nAnd this is the magic of virtual ;)";
    return 0;
}