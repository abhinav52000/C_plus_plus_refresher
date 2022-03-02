#include<iostream>
using namespace std;
template<class T>
T maximum(T a, T b)
{
   return a>b?a:b;
}
int main()
{
    cout<<"\nInt type: "<<maximum(5,8)<<endl<<"\nFloat type: "<<maximum(5.9f,5.8f)<<endl;
    cout<<"\nChar type: "<<maximum('A','a')<<endl<<"\nInt type: "<<maximum(5.65656,5.26565)<<endl;
    return 0;
}