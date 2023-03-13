/*
Write a C++ program to accept length and width of a rectangle. Calculate and display
perimeter as well as area of a rectangle by using Inline function.
*/
#include <iostream>

using namespace std;

inline int area(int l, int b)
{
    return (l * b);
}
inline int peri(int l, int b)
{
    return ((2 * l) + (2 * b));
}

int main()
{
    int len, brth;
    cout << "Enter length of the rectangle: ";
    cin >> len;
    cout << "Enter width of the rectangle: ";
    cin >> brth;

    cout << "The area of the rectangle = " << area(len, brth) << endl;
    cout << "The perimeter of the rectangle = " << peri(len, brth) << endl;

    return 0;
}