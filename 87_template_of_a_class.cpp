#include <iostream>
using namespace std;
template <class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};
template <class T>
void Stack<T>::push(T x)
{
    if (top == size - 1)
        cout << "\n\nStack is Full";
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class T>
T Stack<T>::pop()
{
    T x = 0;
    if (top == -1)
        cout << "\n\nStack is Empty" << endl;
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
// Here sare operation pure pure thik hai esa nhi hai bas haa idea ke liye ki ese chl rha hai kam
// aap uske liye iska use kar skte ho.
int main()
{
    Stack<float> s(3);
    s.push(10);
    s.push(23);
    s.pop();
    s.push(345.5);
    Stack<string> s1(1);
    s1.push("Abhinav kumar");
    s1.push("Ayush kumar");
    return 0;
}