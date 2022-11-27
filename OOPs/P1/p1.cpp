#include <iostream>
#include <string>

using namespace std;
class Student
{
    string name;
    int enrollId;
    float marks;

public:
    void read()
    {
        cout << "Enter Students name: ";
        cin >> name;
        cout << "Enter Students enrollId: ";
        cin >> enrollId;
        cout << "Enter marks: ";

        cin >> marks;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "EnrollId: " << enrollId << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Student st[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details of Student " << i + 1 << endl;
        st[i].read();
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Details of Student " << i + 1 << endl;
        st[i].display();
    }
}