// lat we read tpo find an element in an array it was linear search method
// Binary search method is this one condition to implement this is array must be sorted"

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int A[] = {2, 4, 6, 8, 10, 12, 16, 14, 18, 20}, key,low=0,high,mid;
    bool test = false;
    cout << "\nEnter the element you need to find in the given array: ";
    cin >> key;
    high=(sizeof(A)/sizeof(A[0]))-1;
    do{
        mid=floor((low+high)/2);
        if(A[mid]==key)
        {
            test=true;
            break;
        }
        else if(A[mid]>key)
        {
            high=mid-1;
        }
        else if(A[mid]<key)
        {
            low=mid+1;
        }
    }while(low<=high);
    if (test)
    {
        cout << "\nElement found";
    }
    else
    {
        cout << "\nElement not found";
    }

    return 0;
}