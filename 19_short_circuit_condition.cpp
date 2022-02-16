#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 5;
    cout << "\n\nShort Circuit\n";
    if (a < b && ++i <= b)
    {
    }
    cout << i << endl;
    // Ha ha bahar hi likha hai yha dekh ke pta chlega ki chuki phli condition fail ho gai to aage gya nhi
    //  aur aage gya nhi to i ki value update hui nhi and hence no change same case niche bhi hai
    if (a > b || ++i <= b)
    {
    }
    cout << i << endl;
    // Now iske niche jo hai wo isliye hia ki haa agr short ckt na ho to kaise update ho jata hai wo bhi dekho
    cout << "\nShort circuit is not here\n";
    if (a > b && ++i <= b)
    {
    }
    cout << i << endl;
    // Ha ha bahar hi likha hai yha dekh ke pta chlega ki chuki phli condition true ho gai to aage gya hai
    //  aur aage gya is bar to i ki value update hui and hence change hua. same case niche bhi hai
    if (a < b || ++i <= b)
    {
    }
    cout << i << endl;
}