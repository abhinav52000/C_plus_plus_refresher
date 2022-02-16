#include <iostream>
using namespace std;
int main()
{
    int Amount;
    cout << "\nEnter the total payable amount :";
    cin >> Amount;
    if (Amount >= 500)
    {
        cout << "\nTotal payable amount is " << Amount - (0.2 * Amount);
    }
    else if (Amount >= 100 && Amount < 500)
    {
        cout << "\nTotal payable amount is " << Amount - (0.1 * Amount);
    }
    else
    {
        cout << "\nTotal payable amount is " << Amount;
    }

    return 0;
}