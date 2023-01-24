//2. Write a C++ program to display first ‘n’ numbers of Fibonacci series
#include<iostream>
using namespace std;
int main(){
    // system("cls");
    int n,f1=0,f2=1,nw=0;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(int i=1;i<=n;i++){ 	
        if(i==1){
            cout<<f1<<", ";continue;
        }
        if(i==2){
            cout<<f2<<", ";continue;
        }
        nw=f1+f2;
        f1=f2;
        f2=nw;
        cout<< nw<<", ";	
    }
   return 0;
}