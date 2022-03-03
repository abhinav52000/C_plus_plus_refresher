#include <iostream>
using namespace std;
int g = 10;
int t = 50;
int fun()
{
    int t = 80;
    return t;
}
int fun1()
{
    int g = 180;
    return ::g;
}
int main()
{
    int t = 70;
    cout << fun();              // This prints t that is local variable to function fun()
    cout << endl << fun1();     //This prints the global value of g that is beacuse scope resolution operator is used with g
    cout << endl << t;          //This prints local value for t in the main function
    cout << endl << ::t;        //This prints global value for t in the main function since scope resolution operator is used
    cout << endl << g;          //This prints the same global variable value even without scope resolution reason being koi hai 
                                // hi nhi g name se local variable
    return 0;
}