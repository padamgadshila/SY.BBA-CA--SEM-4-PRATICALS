/*
Create a C++ program to maintain inventory of a book having details Title, Authors[],
Price, Publisher and Stock. Book can be sold, if stock is available, otherwise purchase will be
made. Write a menu driven program to perform following operation:
 Accept book details.
 Sale a book. (Sale contains number of copies to be sold.)
 Purchase a book. (Purchase contains number of copies to be purchased)
(Use dynamic memory allocation while accepting author details).
*/

#include <iostream>
#include <iomanip>

using namespace std;

class books
{
public:
    char bname[20], pbname[10], aname[10];
    int price, stock;
    void accept()
    {
        cout << "Enter book name: ";
        cin >> bname;
        cout << "Enter book author: ";
        cin >> aname;
        cout << "Enter book publisher: ";
        cin >> pbname;
        cout << "Enter price for book " << bname << ": ";
        cin >> price;
        cout << "Enter stock for book " << bname << ": ";
        cin >> stock;
    }
    void display()
    {
        cout << setw(50) << "------Book Details------" << endl;
        cout << setw(15) << "Book" << setiosflags(ios::right) << setw(15) << "Author" << setiosflags(ios::right) << setw(20) << "Publisher" << setiosflags(ios::right) << setw(10) << "Price" << setiosflags(ios::right) << setw(10) << "Stock" << endl;
        cout << setw(70) << setfill('-') << "" << endl;
        cout << setfill(' ') << setw(15) << bname << setw(15) << aname << setw(20) << pbname << setw(10) << price << setw(10) << stock << endl;
    }

    int sale_copies, restock = 0;
    void cal()
    {
        cout << "How many copies want to sell:";
        cin >> sale_copies;
        restock = stock - sale_copies;
    }
    void sale_display()
    {
        cout << setfill(' ') << setw(15) << bname << setw(15) << aname << setw(20) << pbname << setw(10) << price << setw(10) << restock << endl;
    }

    int purchase_stock;
    void ask()
    {
        cout << "How many copies want to purcase:";
        cin >> purchase_stock;
        restock = restock + purchase_stock;
    }
    void pur_display()
    {
        cout << setfill(' ') << setw(15) << bname << setw(15) << aname << setw(20) << pbname << setw(10) << price << setw(10) << restock << endl;
    }
};

int main()
{
    int choice;
    books b;

    do
    {
        cout << "\n============Menu============" << endl;
        cout << "\n 1. Add books details" << endl;
        cout << "\n 2. Display books details" << endl;
        cout << "\n 3. Sell a book" << endl;
        cout << "\n 4. Purchase a book" << endl;
        cout << "\n 5. Exit" << endl;
        cout << "\n -> ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.accept();
            break;
        case 2:
            b.display();

            break;
        case 3:
            b.cal();
            b.sale_display();
            break;
        case 4:
            b.ask();
            b.pur_display();
            break;
        case 5:
            exit(0);
            break;
        }
    } while (choice != 5);
    return 0;
}
