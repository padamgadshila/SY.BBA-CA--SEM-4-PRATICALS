/*
Write a C++ program to accept ‘n’ float numbers, store them in an array and print the
alternate elements of an array. (Use dynamic memory allocation)
*/
#include <iostream>

using namespace std;

int accept(int a[10], int no)
{
    for (int i = 0; i < no; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> a[i];
    }
    return a[10];
}

void display(int a[10], int no)
{
    cout << "The orignal array" << endl;
    for (int i = 0; i < no; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void alternate(int a[10], int no)
{
    cout << "The alternate array" << endl;
    for (int i = 0; i < no; i++)
    {
        if (i % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int num, arr[10];
    cout << "How many numbers you want: ";
    cin >> num;
    accept(arr, num);
    display(arr, num);
    alternate(arr, num);
    return 0;
}