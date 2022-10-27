#include<stdio.h>
#include<conio.h>

int Div(int,int);

int main()
{
    int No1=0,No2=0;

    printf("\n\t Enter First Number For Division : ");
    scanf("%d",&No1);

    printf("\n\t Enter Second Number For Division : ");
    scanf("%d",&No2);

    printf("\n\t Division Of %d And %d Is %d.",No1,No2,Div(No1,No2));

    printf("\n\n============================**********================================\n\n");

    getch();
    return 0;
}

int Div(N1,N2)
{
    return N1/N2;
}
