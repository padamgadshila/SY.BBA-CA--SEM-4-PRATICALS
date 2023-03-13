/*
Write a C++ program to accept and display Bank_Account details as Acc_No,
Acc_holder_name, Addr, Contact_Number and Balance. Perform deposit of some amount
and display modified bank account details. (Use manipulators)
*/

#include <iostream>
#include <iomanip>
using namespace std;

class bank
{
public:
    long int acc_no;
    float balance, depo;
    char acc_holder_name[20], addr[50], contact_no[20];
    void accept()
    {
        cout << "\n Enter your account no: ";
        cin >> acc_no;
        cout << "\n Enter your contact no: ";
        cin >> contact_no;
        cout << "\n Enter your name: ";
        cin >> acc_holder_name;
        cout << "\n Enter your address: ";
        cin >> addr;
        cout << "\n Enter your balance: ";
        cin >> balance;
    }
    void deposit()
    {
        cout << "\n Enter the amount to be deposited: ";
        cin >> depo;
        display();
        cout << setiosflags(ios::right) << setw(92) << "+" << depo << endl;
    }

    void display()
    {
        cout << setw(100) << setfill('=') << "" << endl;
        cout << setfill(' ') << setw(50) << "Bank details" << endl;
        cout << setw(100) << setfill('=') << "" << endl;
        cout << setfill(' ') << setw(10) << "A/c No" << setw(20) << "Name" << setw(15) << "Contact No" << setw(40) << "Address" << setw(11) << "Balance" << endl;
        cout << setw(10) << setfill('-') << ""
             << "  " << setw(18) << setfill('-') << ""
             << "  " << setw(13) << setfill('-') << ""
             << "  " << setw(39) << setfill('-') << ""
             << "  " << setw(9) << setfill('-') << ""
             << "  " << endl;
        cout << setfill(' ') << setw(10) << acc_no << setw(20) << acc_holder_name << setw(15) << contact_no << setw(40) << addr << setw(11) << balance << endl;
    }
    void total()
    {
        cout << setw(100) << setfill('_') << "" << endl;
        cout << setiosflags(ios::right) << setfill(' ') << setw(80) << "Total" << setw(16) << depo + balance << endl;
    }
};

int main()
{
    bank b;
    b.accept();
    b.deposit();
    b.total();
    return 0;
}
