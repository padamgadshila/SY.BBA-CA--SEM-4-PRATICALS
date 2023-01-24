/*

1. Write a C++ program to print the following pattern
      * 
     * * 
    * * * 
   * * * * 
  * * * * *
*/
#include<iostream>
using namespace std;

int main(){
    int i,s,n=5,k;
    for(i=1,k=0;i<=n;++i,k=0){
        for(s=1;s<=n-i;++s){
            cout<<" ";
        }
        while(k != 2*i-1){
            cout<<"*";
            ++k;
        }
        cout<<endl;
    }
    return 0;
}