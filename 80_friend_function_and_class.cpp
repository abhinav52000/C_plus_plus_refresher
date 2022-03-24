#include <iostream>
using namespace std;
class Abhinash;
class Abhinav
{
private:
    string myname = "Abhinav Kumar";
    friend void fname();
    friend Abhinash;
};
void fname()
{
    Abhinav a;
    cout << "\n\nFather name is " << a.myname;
}
class Abhinash
{
    Abhinav a;

public:
    string father = a.myname;
};
int main()
{
    fname();
    Abhinash AN;
    cout << "\n\nFather name of Abhinash is " << AN.father;
    return 0;
}