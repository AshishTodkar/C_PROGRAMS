#include<stdio.h>
#include<conio.h>

int Add();

int main()
{
    int Sum=0;

    Sum = Add();

    printf("\n\t Addition Is %d.",Sum);

    printf("\n\n============================**********================================\n\n");

    getch();
    return 0;
}

int Add()
{
    int No1=0,No2=0;

    printf("\n\t Enter First Number For Addition : ");
    scanf("%d",&No1);
    printf("\n\t Enter Second Number For Addition : ");
    scanf("%d",&No2);

    return No1 + No2;
}
