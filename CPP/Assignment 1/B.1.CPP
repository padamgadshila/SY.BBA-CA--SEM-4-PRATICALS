/*1. Write a C++ program to print the following pattern.
A
B C
D E F
G H I J */
#include<iostream>
using namespace std;
int main(){
    // system("cls");
    int i,j,k=1,no;
    cout<<"Enter a number: ";
    cin>>no;
        for(i=1;i<=no;i++){
        	
            for(j=1;j<=i;j++,k++)
            {
            	cout<<" "<<(char)(k+64);
			}
			cout<<"\n";
        }
    
   return 0;
}