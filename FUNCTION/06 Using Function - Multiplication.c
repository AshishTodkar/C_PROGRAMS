#include<stdio.h>
#include<conio.h>

int Mul(int,int);

int main()
{
    int No1=0,No2=0;

    printf("\n\t Enter First Number For Multiplication : ");
    scanf("%d",&No1);

    printf("\n\t Enter Second Number For Multiplication : ");
    scanf("%d",&No2);

    printf("\n\t Multiplication Of %d And %d Is %d.",No1,No2,Mul(No1,No2));

    printf("\n\n============================**********================================\n\n");

    getch();
    return 0;
}

int Mul(N1,N2)
{
    return N1*N2;
}
