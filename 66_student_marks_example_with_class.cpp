#include <iostream>
using namespace std;
class student
{
    int m1, m2, m3, roll;
    string name;

public:
    student(string name, int roll, int m1, int m2, int m3)
    {
        this->name = name;
        this->roll = roll;
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
        cout << "\n\nThe student named " << this->name << " with roll: " << this->roll << "\nMarks secured are: " << m1 << " " << m2 << " " << m3;
    }
    int marks()
    {
        return m1 + m2 + m3;
    }
    char grade()
    {
        if ((m1 + m2 + m3) / 3 > 90)
            return 'A';
        else if ((m1 + m2 + m3) / 3 > 70)
            return 'B';
        else if ((m1 + m2 + m3) / 3 > 50)
            return 'C';
        else if ((m1 + m2 + m3) / 3 > 30)
            return 'D';
        else
            return 'E';
    }
};
int main()
{
    int a, b, c, r;
    string n;
    cout << "\n\nEnter name of the student: ";
    getline(cin, n);
    cout << "\nEnter roll number: ";
    cin >> r;
    cout << "\nEnter marks of each sunbject: ";
    cin >> a >> b >> c;
    student s(n, r, a, b, c);
    cout << "\n\nTotal marks: " << s.marks() << " and grade for this is: " << s.grade();
    return 0;
}