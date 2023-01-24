/*3. Write a C++ program to calculate following series:
(1*1)+(2*2)+(3*3)+ … + (n*n) */
#include<iostream>
using namespace std;
int main(){
    // system("cls");
    int no,s=0,i;
    cout<<"Enter a number: ";
    cin>>no;
    for(i=1;i<=no;i++){
        s+=(i*i);
    }
    cout<<s;
   return 0;
}