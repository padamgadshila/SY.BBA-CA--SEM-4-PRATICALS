//3. Write a C++ program to reverse a number.
#include<iostream>
using namespace std;
int main(){
    // system("cls");
    int n,rem=0,rev=0;
    cout<<"Enter the number of terms: ";
    cin>>n;
    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    cout<<"The reverse number is "<<rev;
   return 0;
}