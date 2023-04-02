/*
Write a C++ program to create two classes Array1 and Array2 with an integer array as a
data member. Write necessary member functions to accept and display array elements of
both the classes. Find and display maximum of both the array. (Use Friend function)
*/
#include <iostream>
using namespace std;

class ARRAY1;
class ARRAY2;

class ARRAY1
{
    int a[10], n, i, max = 0;

public:
    void accept()
    {
        cout << "How many no you want to add for class 1: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "ARRAY [" << i + 1 << "]: ";
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
        }

        cout << "Maximum of array for class 1 = " << max << endl;
    }
    friend int cal(ARRAY1 a, ARRAY2 b);
};

class ARRAY2
{
    int b[10], n, i, max = 0;

public:
    void accept()
    {
        cout << "How many no you want to add for class 2: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "ARRAY [" << i + 1 << "]: ";
            cin >> b[i];
            if (b[i] > max)
            {
                max = b[i];
            }
        }
        cout << "Maximum of array for class 2 = " << max << endl;
    }
    friend int cal(ARRAY1 a, ARRAY2 b);
};

int cal(ARRAY1 x, ARRAY2 y)
{
    return (x.max > y.max ? x.max : y.max);
}

int main()
{
    ARRAY1 x;
    ARRAY2 y;
    x.accept();
    y.accept();
    cout << "Maximum from class 1 and class 2 = " << cal(x, y);
    return 0;
}