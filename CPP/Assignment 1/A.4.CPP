//4. Write a C++ program to display Armstrong numbers between two intervals
#include<iostream>
using namespace std;
int main(){
    // system("cls");
    int n,rem=0,arm=0,a;
    cout<<"Enter the number of terms: ";
    cin>>n;
    a=n;
    while(n!=0){
        rem=n%10;
        arm += (rem*rem*rem);
        n=n/10;
    }
    if(arm==a){
        cout<<a<<" is an armstrong number";
    }else{
        cout<<a<<" is not an armstrong number";
    }
   return 0;
}