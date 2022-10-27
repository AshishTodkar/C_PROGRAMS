#include<stdio.h>
#include<conio.h>

int Sub(int,int);

int main()
{
    int No1=0,No2=0;

    printf("\n\t Enter First Number For Subtraction : ");
    scanf("%d",&No1);

    printf("\n\t Enter Second Number For Subtraction : ");
    scanf("%d",&No2);

    printf("\n\t Subtraction Of %d And %d Is %d.",No1,No2,Sub(No1,No2));

    printf("\n\n============================**********================================\n\n");

    getch();
    return 0;
}

int Sub(N1,N2)
{
    return N1-N2;
}
