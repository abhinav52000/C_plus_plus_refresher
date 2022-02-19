#include <iostream>
using namespace std;
int main()
{
    // int a[3][3]={2,4,6,8,10,12,14,16,18};
    // int a[3][3]={2,4}; (All rest element will be 0)
    int a[3][3] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
    int b[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "\nAddition of two matrix is: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSuntraction of two matrix is: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] - b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}