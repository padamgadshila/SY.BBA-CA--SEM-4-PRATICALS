/*
Write a C++ program to calculate area and circumference of a Circle. (Use default
argument, scope resolution operator and manipulator.)
*/
#include <iostream>
#include <iomanip>

using namespace std;

float radius = 5;
float area(float r, float pi = 3.14)
{
    return (pi * r * r);
}

float circ(float r, float pi = 3.14)
{
    return (2 * pi * r);
}

int main()
{
    cout << setw(30) << setiosflags(ios::left) << "Area of the circle" << setw(3) << "=" << setw(10) << area(::radius) << endl;
    cout << setw(30) << setiosflags(ios::left) << "Circumference of the circle" << setw(3) << "=" << setw(10) << circ(::radius) << endl;
    return 0;
}