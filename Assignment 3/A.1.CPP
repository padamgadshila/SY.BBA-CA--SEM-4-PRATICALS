#include <iostream>
#include <iomanip>
using namespace std;

class student
{
    int roll_no;
    char sname[10], sclass[10];

public:
    void accept()
    {
        cout << "Enter student Roll No: ";
        cin >> roll_no;
        cout << "Enter student Name: ";
        cin >> sname;
        cout << "Enter student Class: ";
        cin >> sclass;
    }

    void diplay()
    {
        cout << setw(10) << roll_no << setw(10) << sname << setw(10) << sclass << endl;
    }
};

int main()
{
    student s[10];
    int no;

    cout << "How many student details you want to enter: ";
    cin >> no;
    for (int i = 0; i < no; i++)
    {
        cout << setw(10) << "Student " << i + 1 << endl;
        s[i].accept();
    }

    cout << setw(25) << "Student details" << endl;
    cout << setw(10) << "Roll No" << setw(10) << "Name" << setw(10) << "Class" << endl;
    cout << setw(30) << setfill('-') << "" << endl;
    cout << setfill(' ') << "";
    for (int i = 0; i < no; i++)
    {
        s[i].diplay();
    }
    cout << "There are total " << no << " students" << endl;
    return 0;
}
