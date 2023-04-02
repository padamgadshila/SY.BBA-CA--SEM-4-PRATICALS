/*
Write a C++ program to calculate multiplication of two integer numbers of two different
classes. (Use friend class)
*/
#include <iostream>

using namespace std;

class number2;

class number1
{
    int a;

public:
    void getdata()
    {
        cout << "Enter the value for a : ";
        cin >> a;
    }
    friend int mul(number1 a, number2 b);
};
class number2
{
    int b;

public:
    void getdata()
    {
        cout << "Enter the value for b : ";
        cin >> b;
    }
    friend int mul(number1 a, number2 b);
};

int mul(number1 x, number2 y)
{
    return (x.a * y.b);
}

int main()
{
    number1 no1;
    number2 no2;
    no1.getdata();
    no2.getdata();
    cout << "The mulitpliaction = " << mul(no1, no2);

    return 0;
}