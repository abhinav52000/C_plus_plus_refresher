#include <iostream>
#include <fstream>
using namespace std;
class student
{
    string name;
    int roll, pay;

public:
    student() {}
    student(string n, int r, int b)
    {
        name = n;
        roll = r;
        pay = b;
    }
    friend ofstream &operator<<(ofstream &ofs, student s);
    friend ifstream &operator>>(ifstream &ifs, student &s);
    friend ostream &operator<<(ostream &os, student s);
};
ofstream &operator<<(ofstream &ofs, student s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.pay << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, student &s)
{
    ifs >> s.name;
    ifs >> s.roll;
    ifs >> s.pay;
    return ifs;
}
ostream &operator<<(ostream &os, student s)
{
    os << "\nName: " << s.name;
    os << "\nRoll: " << s.roll;
    os << "\nPay: " << s.pay;
    return os;
}
int main()
{
    student s1("Abhinav", 20402720, 20159);
    ofstream likha;
    likha.open("my.txt");
    likha << s1;
    likha.close();
    student s2;
    ifstream padho("my.txt");
    padho >> s2; // sara ka sara stream isme order mai load kar diya
    cout << s2;  // aur isne phir sabko output pe show kar diya in order beacuse hme already cout<< ko overload kar rkhah hai.
    return 0;
}