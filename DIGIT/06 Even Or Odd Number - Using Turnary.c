#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n\t To Check Given Number Is Even Or Odd => \n");

    printf("\n\t Enter a Number : ");
    scanf("%d",&No);

    (No % 2 == 0)?printf("\n\t %d Is an Even Number.",No):printf("\n\t %d Is an Odd Number.",No);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}




