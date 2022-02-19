#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "\n\nEnter two number: ";
    cin >> num1 >> num2;
    fflush(stdin);
    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1=num1-num2;
        }
        else
        {
            num2=num2-num1;
        }
    }
    cout << "\nGreatest common divisior is "<<num1;
    return 0;
}