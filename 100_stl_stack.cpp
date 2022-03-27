#include <iostream>
#include <stack>
using namespace std;
void showpq(stack<int> gq)
{
    stack<int> g = gq; // yha dusre mai leke copy kiya phir pop karte hue show kar diya
    while (!g.empty())
    {
        cout << g.top() << "\t"; // stack mai top se phle data ka access hota hai
        g.pop();
    }
    cout << '\n';
}
int main()
{
    stack<int> v;
    v.push(48);
    v.push(59);
    v.push(52);
    v.pop(); // yha pe apko location nhi dalna nahi value btana hai ye sidhe last in first out (LIFO) wle principle ke according karta hai
    v.push(52);
    v.push(45);
    v.push(54);
    cout << v.size() << endl;
    cout << "\n\n";
    showpq(v); // function ke madad se hi ho skta hai.
    return 0;
}