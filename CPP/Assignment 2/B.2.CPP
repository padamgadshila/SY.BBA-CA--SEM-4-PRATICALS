/*
Write a C++ program to modify contents of an integer array. (Use Call by reference)
*/
#include <iostream>

using namespace std;

int arr[10];
void accept(int no)
{
    for (int i = 0; i < no; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void display(int no)
{
    cout << "The orignal array" << endl;
    for (int i = 0; i < no; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int modify(int &no, int &p)
{
    for (int i = 0; i < no; i++)
    {
        if (arr[i] == no)
        {
            arr[i] = p;
        }
    }
}
int main()
{
    int num, arr[10];
    cout << "How many numbers you want: ";
    cin >> num;
    accept(num);
    display(num);
    int no, p;
    cout << "Choose a number to modify:";
    cin >> no;
    cout << "Enter a new number: ";
    cin >> p;
    modify(no, p);
    display(num);
    return 0;
}