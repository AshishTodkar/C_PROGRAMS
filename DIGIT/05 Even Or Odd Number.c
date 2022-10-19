#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n\t To Check Given Number Is Even Or Odd => \n");

    printf("\n\t\t Enter a Number : ");
    scanf("%d",&No);

    if( No % 2 == 0)
    {
        printf("\n\t\t %d Is an Even Number.",No);
    }
    else
    {
        printf("\n\t\t %d Is an Odd Number.",No);
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
