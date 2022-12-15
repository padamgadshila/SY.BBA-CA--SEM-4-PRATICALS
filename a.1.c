#include<stdio.h>
#include<conio.h>


void main()
{   
    int ar[7]={1,1,2,2,2,2,3},i,x,a=0;
    system("cls");
    printf("\n Enter the number to check: ");
    scanf("%d",&x);
    for(i=0;i<7;i++)
    {
        if(ar[i]==x)
        {
            a++;
        }
    }
            printf("\n %d is repeated %d times",x,a);
    getch();
}