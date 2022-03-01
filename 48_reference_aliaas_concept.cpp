#include <iostream>
using namespace std;
int main()
{
    // #Judwa concept
    int x = 10;
    int &y = x;
    // Now y is alias of x also this is needed to be done same way dusri line mai &y=x kiya phli mai bas nam likha not valid
    ++x;
    cout << y << endl;
    ++y;
    cout << x << endl;
    y -= 10;
    cout << x;
    return 0;
}