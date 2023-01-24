//1. Write a C++ program to generate multiplication table.
#include<iostream>
using namespace std;
int main(){
    // system("cls");
    int i,no;
    cout<<"enter a number: ";
    cin>>no;

    for(i=1;i<=10;i++){
       cout<<no<<"*"<<i<<"="<<no*i<<endl;
    }
   return 0;
}