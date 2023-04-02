/*
Write a C++ program to create a class Distance with data members feet and inches. Write
member functions for the following:
a. To accept distance
b. To display distance
c. To add two distance objects
(Use object as a function argument and function returning object)
*/
#include <iostream>
using namespace std;

class dist
{
    int feet;
    float inches;

public:
    void accept()
    {
        cout << "Enter the feets :";
        cin >> feet;
        cout << "Enter the inches :";
        cin >> inches;
    }

    friend dist cal(dist, dist);
    void display();
};

dist cal(dist d1, dist d2)
{
    dist d3;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    return d3;
}

void dist::display()
{
    cout << "Feet = " << feet << " Inches = " << inches;
}
int main()
{
    dist d1, d2, d3;
    d1.accept();
    d2.accept();
    d3 = cal(d1, d2);
    cout << "Total" << endl;
    d3.display();
}