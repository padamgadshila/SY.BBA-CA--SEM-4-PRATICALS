/*5. Write a C++ program to accept two integers and an arithmetic operator(+, -, *, /) from 
user and performs the corresponding arithmetic operation and display the result. (Use 
switch statement) */
#include<iostream>
using namespace std;
int main(){
    // system("cls");
    int no1,no2;
    char c;
    cout<<"Enter the two numbers : ";
    cin>>no1>>no2;
    cout<<"Enter a operator from(+,-,/,*): ";
    cin>>c;
    switch(c){
        case '+':cout<<"The addition is "<<no1+no2;break;
        case '-':cout<<"The subraction is "<<no1-no2;break;
        case '*':cout<<"The multiplication is "<<no1*no2;break;
        case '/':cout<<"The division is "<<no1/no2;break;
        default :cout<<"Choose proper operator\n(+,-,*,/)";
    }
   return 0;
}