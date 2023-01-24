/*2. Write a C++ program to print the following pattern 
        *
      * *
    * * *
  * * * */
#include<iostream>
using namespace std;
int main(){
    // system("cls");
    int i,j,k,n=1;
        for(i=5;i>=1;i--){
        	
            for(j=1;j<=i;j++)
            {
			cout<<"  ";
			}
            for(k=1;k<=n;k++){
                cout<<" *";
            }
            cout<<endl;
			n++;	
        }
    
   return 0;
}