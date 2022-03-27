#include <iostream>
#include <set> // same way you can do for multiset but multiset ke liye bhi header file same hi hai
using namespace std;
int main()
{
    set<int> v = {52, 16, 18, 20, 26}; // multiset ka karoge to sab same bas duplicate allowed hota hai is case mai
    v.insert(48);
    v.insert(52);
    v.erase(18); // yha pe apko location nhi dalna sidhe value btao ki konsi delete karni hai
    v.insert(52);
    v.insert(45);
    v.insert(54);
    v.erase(v.begin());
    cout << v.size() << endl;
    // using iterator
    cout << "\n\n";
    set<int>::iterator itr;
    // you can modify and update also the values of stored data through this iterator.
    for (itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << " ";
    }
    // using for each loop
    cout << "\n\n";
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}