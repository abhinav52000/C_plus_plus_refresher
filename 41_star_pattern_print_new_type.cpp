#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < 1 + i; k++)
        {
            cout << " *";
        }

        cout << endl;
    }
    return 0;
}