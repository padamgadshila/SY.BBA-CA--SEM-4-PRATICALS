/*
    Write a C++ program to define power function to calculate x^y. (Use default value as 2 for y).
*/
#include <iostream>

using namespace std;
int power(int x, int y = 2)
{
    int r = 1;
    while (y != 0)
    {
        r *= x;
        y--;
    }
    return r;
}
int main()
{
    int x;
    cout << "Enter the value for x: ";
    cin >> x;

    cout << "The power of " << x << " = " << power(x) << endl;

    return 0;
}