#include<stdio.h>
#include<conio.h>

void Add(int,int);

int main()
{
    int No1=0,No2=0;

    printf("\n\t Enter First Number For Addition : ");
    scanf("%d",&No1);
    printf("\n\t Enter Second Number For Addition : ");
    scanf("%d",&No2);

    Add(No1,No2);

    printf("\n\n============================**********================================\n\n");

    getch();
    return 0;
}

void Add(N1,N2)
{
    int Sum=0;

    Sum = N1 + N2;

    printf("\n\t Addition Of %d And %d Is %d.",N1,N2,Sum);

    return;
}
