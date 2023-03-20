#include <iostream>
#include <iomanip>
using namespace std;

class student
{
    char sname[10], sclass[10];

public:
    int h;
    void accept()
    {
        cout << "Enter student Name: ";
        cin >> sname;
        cout << "Enter student height: ";
        cin >> h;
    }

    void diplay()
    {
        cout << setw(10) << sname << setw(10) << h << endl;
    }
};

int main()
{
    student s[10];
    int no, ht = 0;

    cout << "How many student details you want to enter: ";
    cin >> no;
    for (int i = 0; i < no; i++)
    {
        cout << setw(10) << "Student " << i + 1 << endl;
        s[i].accept();
    }

    cout << setw(25) << "Student details" << endl;
    cout << setw(10) << "Name" << setw(10) << "Height" << endl;
    cout << setw(30) << setfill('-') << "" << endl;
    cout << setfill(' ') << "";
    for (int i = 0; i < no; i++)
    {
        s[i].diplay();
    }

    for (int i = 0; i < no; i++)
    {
        ht = (ht + s[i].h);
    }

    cout << "the height = " << ht / no;
    return 0;
}
