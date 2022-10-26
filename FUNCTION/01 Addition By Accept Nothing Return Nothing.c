#include<stdio.h>
#include<conio.h>

void Add();

int main()
{
    Add();

    printf("\n\n============================**********================================\n\n");

    getch();
    return 0;
}

void Add()
{
    int No1=0,No2=0,Sum=0;

    printf("\n\t Enter First Number For Addition : ");
    scanf("%d",&No1);
    printf("\n\t Enter Second Number For Addition : ");
    scanf("%d",&No2);

    Sum = No1 + No2;

    printf("\n\t Addition Of %d And %d Is %d.",No1,No2,Sum);

    return;
}
