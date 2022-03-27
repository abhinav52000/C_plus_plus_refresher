#include <iostream>
#include <map> //multimap bhi isme allowed hai
using namespace std;
int main()
{
    map<int, string> m; // multi map mai duplicate allowed hai
    // key and value are always arranged as per key and in increasing order of key value like phle 1 ka phir 2 and so on
    m.insert(pair<int, string>(1, "Abhinav Kumar"));
    m.insert(pair<int, string>(2, "Ayush Kumar"));
    // map mai agr duplicate bnane ki kosis karoge to wo duplicate ko store hi nhi karega if phle se wo key ke corresponding kuch hai to
    m.insert(pair<int, string>(1, "kabir Kumar"));
    m.insert(pair<int, string>(5, "krishna"));
    m.erase(3); // key value ko dalo aur bas kam kar diya jayega
    // in case of multimap isme aap key value dalo aur agr koi duplicate key hui to dono ka data gya smjho
    cout << m.size() << endl;
    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    map<int, string>::iterator itr1;
    itr1 = m.find(1); // this will return the key value pair to iterator and t=you can view it there
    cout << "\n\nMil gya: " << itr1->first << " " << itr1->second;
    cout << "\n\n";
    return 0;
}