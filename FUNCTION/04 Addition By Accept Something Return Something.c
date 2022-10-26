#include<stdio.h>
#include<conio.h>

int Add(int,int);

int main()
{
    int No1=0,No2=0,Sum=0;

    printf("\n\t Enter First Number For Addition :");
    scanf("%d",&No1);

    printf("\n\t Enter Second Number For Addition :");
    scanf("%d",&No2);

    Sum = Add(No1,No2);

    printf("\n\t Addition Of %d And %d Is %d.",No1,No2,Sum);

    printf("\n\n============================**********================================\n\n");

    getch();
    return 0;
}

int Add(N1,N2)
{
    return N1+N2;
}
