#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
    public:
    rectangle(int length, int breadth)
    // Now yha kya hua ki do variable hai hmara man hua ki same nam ka bna de bna diya aab par aab hm confuse ho skte 
    // hai na ki yar konsa kiska hai to iske liye hi aab ye tarika nikala gya ki this keyword ka use karo isse kya hoga 
    // ki ye btayega ki this mtlb class ka variable hai jis class mai kam chl rha hai.
    {
        this->length=length;
        this->breadth=breadth;
    }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    int length=5,breadth=8;
    rectangle R(length,breadth);
    cout<<"\n\nArea of the rectangle is: "<< R.area();
    return 0;
}