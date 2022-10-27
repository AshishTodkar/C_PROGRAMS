#include<stdio.h>
#include<conio.h>

void EvenOdd(int);

int main()
{
    int No=0;

    printf("\n\t Enter A Number To Check It Is Even Or Odd : ");
    scanf("%d",&No);

    EvenOdd(No);

    printf("\n\n==================================*************===================================\n\n");

    getch();
    return 0;
}

void EvenOdd(No)
{
    if( No % 2 == 0)
    {
        printf("\n\t Given Number %d Is Even Number.",No);
    }
    else
    {
        printf("\n\t Given Number %d Is Odd Number.",No);
    }

    return;
}
