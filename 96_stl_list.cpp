#include <iostream>
#include <list> // same way you can do for forward_list or deque
using namespace std;
int main()
{
    list<int> v = {52, 16, 18, 20, 26};
    // v.push_back(48);
    v.push_back(52);
    v.pop_back();
    v.push_front(52);
    v.push_front(45);
    v.pop_front();
    v.erase(v.begin());
    cout << v.size() << endl
         << v.front() << endl
         << v.back();

    // using iterator
    cout << "\n\n";
    list<int>::iterator itr;
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