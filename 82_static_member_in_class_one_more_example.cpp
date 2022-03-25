#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }
    void display() { cout << "Name " << name << endl
                          << "Roll " << roll << endl; }
};
int Student::addNo = 0;
int main()
{
    Student s1("Abhinav");
    Student s2("rathore");
    Student s3("Ayush");
    Student s4("rudra");
    Student s5("akhil");
    Student s6("nikhil");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();
    cout << "Number Admission " << Student::addNo << endl;
}