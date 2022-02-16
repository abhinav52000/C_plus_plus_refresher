#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "\nEnter two operand to operate upon : ";
    cin >> a >> b;
    cout << "\nEnter operation you need to perform : ";
    char operation;
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "\nAddition of two number is " << a + b;
        break;
    case '-':
        cout << "\nSubtraction of two number is " << a - b;
        break;
    case '*':
        cout << "\nMultiplication of two number is " << a * b;
        break;
    case '/':
        cout << "\nDivision of two number is " << a / b;
        break;
    case '%':
        cout << "\nRemainder of two number is " << a % b;
        break;
    default:
        cout << "\nInvalid Choice";
        break;
    }
    return 0;
}