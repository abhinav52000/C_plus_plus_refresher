#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {52, 16, 18, 20, 26};
    // v.push_back(48);
    v.push_back(52);
    v.pop_back();
    cout << v.size() << endl
         << v.front() << endl
         << v.back();
    v.erase(v.begin());
    // using iterator
    cout << "\n\n";
    vector<int>::iterator itr;
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