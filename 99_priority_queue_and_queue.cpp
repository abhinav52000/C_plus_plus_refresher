#include <iostream>
#include <queue> // same way you can do for queue same header file hai
using namespace std;
void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq; // yha dusre mai leke copy kiya phir pop karte hue show kar diya
    while (!g.empty())
    {
        cout << g.top() << "\t"; // queue mai front se phle data ka access hota hai whi priority_queue mai top se hota hai
        g.pop();
    }
    cout << '\n';
}
int main()
{
    // priority_queue is max heap no dupliate allowed and top pe hmesa max rhta hai. 
    priority_queue<int> v; // same way queue ka use kar skte ho tum
    v.push(48);
    v.push(59);
    v.push(52);
    v.pop(); // yha pe apko location nhi dalna nahi value btana hai ye sidhe first in first out (FIFO) wle principle ke according karta hai
    v.push(52);
    v.push(45);
    v.push(54);
    v.pop();
    cout << v.size() << endl;
    cout << "\n\n";
    showpq(v); // function ke madad se hi ho skta hai.
    return 0;
}