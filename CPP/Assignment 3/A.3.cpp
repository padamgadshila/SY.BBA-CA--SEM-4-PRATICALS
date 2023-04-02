/*
Write a C++ program to calculate maximum and minimum of two integer numbers of two
different classes.(Use friend function)
*/
#include <iostream>

using namespace std;

class number1;
class number2;

class number1
{
    int a;

public:
    void accept()
    {
        cout << "Enter the value for a of class 1: ";
        cin >> a;
    }
    friend int cal(number1 a, number2 b);
};

class number2
{
    int b;

public:
    void accept()
    {
        cout << "Enter the value for b of class 2: ";
        cin >> b;
    }
    friend int cal(number1 a, number2 b);
};

int cal(number1 x, number2 y)
{
    return (x.a > y.b ? x.a : y.b);
}

int main()
{
    number1 x;
    number2 y;

    cout << cal(x, y);
    return 0;
}