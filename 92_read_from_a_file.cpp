#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream padho;
    // ifstream padho; ->ese bhi likh skte the to aage jake mention nhikarna parta ios::in ya out par maine bas btane ke liye kiya hai
    // ki fstream ka object bnaoge to aap koi bhi stream ke trh use use kar skte ho ios::in to dekh liya read ke liye and ios::out
    // hota write ke liye
    padho.open("my.txt", ios::in);
    string s;
    if (!padho.is_open())
    // ya likh skte ho if(!padho)
    {
        cout << "\n\nFile cannot be opened since this file donot exist";
    }
    cout << "\n\n";
    while (padho)
    // ya likh skte ho while(!padho.eof())
    {
        padho >> s; // ye har ek word ko till space na encounter ho ek bar read karta hai aur use s mai de deta hai.
        cout << s << "  ";
        if (padho.eof()) /* ye while(padho) likhoge to last word of file ko do bar read karega to overcome karne ke
                            liye ye if statement lgani paregi. Otherwise while(!padho.eof()) use karlo to ye chkar nhi parega wo repeat
                            nhi karta last word */
            break;
    }
    padho.close();
    return 0;
}