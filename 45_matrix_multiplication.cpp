#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
l:
    cout << "\nEnter the size of First matrix: ";
    cin >> r1 >> c1;
    cout << "\nEnter the size of second Matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "\nWrong size input try again";
        goto l;
    }
    int m1[r1][c1];
    int m2[r2][c2];
    int f[r1][c2] = {};
    cout << "\nEnter element of matrix 1: \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "\nEnter element of matrix 2: \n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> m2[i][j];
        }
    }
    cout << "\nMultiplication of two matrix is: \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                f[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << f[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}