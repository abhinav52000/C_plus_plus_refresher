#include <iostream>
#include <math.h>
using namespace std;
float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return fabs(a - b);
}
int main()
{
    float a, b;
    cout << "\nInput two number: ";
    cin >> a >> b;
    cout << "\nAddition: " << add(a, b) << endl
         << "\nSubtraction: " << sub(a, b);
    return 0;
}