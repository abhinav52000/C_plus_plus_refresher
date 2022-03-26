#include <fstream>  // isme bas file ka input output stream hai
#include <iostream> // isme bas keyboard and screen ke liye stream hai
using namespace std;
int main()
{
    ofstream likho("my.txt"); // by defualt ios::trunc hota hai ios::app se aap last stream se aage add kar skte ho
    likho << "Abhinav Kumar";
    likho << endl
          << 20411502720;
    likho << "\nTop kar yar";
    likho.close();
    cout << "\n\nJob done";
    return 0;
}