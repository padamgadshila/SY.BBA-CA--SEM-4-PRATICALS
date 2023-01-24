// 4. Write a C++ program to convert decimal number into binary number.

#include<iostream>
using namespace std;

int stack[100];
int top=-1;
void push(int n){
    stack[++top]=n;
}
void pop(){
    top--;
}

void convert(int no){
    if(no==0){
        cout<<"0";
        return;
    }
    while(no>0){
        push(no%2);
        no/=2;
    }
    while(top!=-1){
        cout<<stack[top];
        pop();
    }
}
int main(){
    // system("cls");
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    convert(n);
   return 0;
}