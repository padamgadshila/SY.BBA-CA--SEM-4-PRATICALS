/*
Write a C++ program using class to accept and display ‘n’ Products information, also
display information of a product having maximum price. (Use array of objects and
dynamic memory allocation)
*/
#include <iostream>
#include <iomanip>
using namespace std;

class product
{
private:
    char pname[10];

public:
    int price;
    void accept()
    {
        cout << "Enter product name: ";
        cin >> pname;
        cout << "Enter Product price: ";
        cin >> price;
    }

    void display()
    {
        cout << setw(10) << pname << setw(10) << price << endl;
    }
};

int main()
{
    int no, i, max = 0;
    cout << "How many products u want to add: ";
    cin >> no;
    no++;
    product p[no];
    for (i = 1; i < no; i++)
    {
        p[i].accept();
        if (p[i].price > max)
        {
            max = p[i].price;
            p[0] = p[i];
        }
    }

    cout << setw(10) << "Name" << setw(10) << "Price" << endl;
    for (i = 1; i < no; i++)
    {
        p[i].display();
    }
    cout << "Products with maximum price are:" << endl;
    cout << setw(10) << "Name" << setw(10) << "Price" << endl;
    p[0].display();
    return 0;
}