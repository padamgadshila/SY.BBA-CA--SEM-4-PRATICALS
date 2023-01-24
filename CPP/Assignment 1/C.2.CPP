/*
2. Write a C++ program to calculate following series:
1/1! + 2/2! + 3/3! + …. + n/n!
*/
#include<iostream>
using namespace std;

int main(){
    int n,f=1,s=0,i;
    cout<<"Enter a number: ";
    cin>>n;

    for(i=1;i<=n;i++){
        f*=i;
        s+=i/f;
    }
    cout<<"Sum is: "<<s;
    return 0;
}