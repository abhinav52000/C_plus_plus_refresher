#include <iostream>
#include <fstream>
using namespace std;
class item
{
    string name;
    int quantity, price;

public:
    item() {}
    item(string n, int q, int p)
    {
        name = n;
        quantity = q;
        price = p;
    }
    friend ofstream &operator<<(ofstream &ofs, item &i);
    friend ifstream &operator>>(ifstream &ifs, item &i);
    friend ostream &operator<<(ostream &os, item &i);
};
ofstream &operator<<(ofstream &ofs, item &i)
{
    ofs << i.name << endl;
    ofs << i.quantity << endl;
    ofs << i.price << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, item &i)
{
    ifs >> i.name;
    ifs >> i.quantity;
    ifs >> i.price;
    return ifs;
}
ostream &operator<<(ostream &os, item &i)
{
    os << "\nProduct Name: " << i.name;
    os << "\nQuantity: " << i.quantity;
    os << "\nPrice: " << i.price;
    return os;
}
int main()
{
    string name;
    int price, qty, n;
    cout << "\nEnter the number of items in your shop: ";
    cin >> n;
    item *list[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> name;
        cin >> price;
        cin >> qty;
        list[i] = new item(name, qty, price);
    }
    ofstream likho("bussiness.txt", ios::trunc);
    for (int i = 0; i < n; ++i)
    {
        likho << *list[i];
    }
    likho.close();
    item i2;
    ifstream padho("bussiness.txt");
    for (int i = 0; i < n; ++i)
    {
        padho >> i2;
        cout << i2;
    }
    padho.close();
    return 0;
}