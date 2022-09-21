#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0 , No2=0 , Sub=0;

    printf("\n\t Enter a First Number For Subtraction : ");
    scanf("%d",&No1);

    printf("\n\t Enter a Second Number For Subtraction : ");
    scanf("%d",&No2);

    Sub = No1 - No2;

    printf("\n\t Subtraction Of %d And %d is %d.",No1,No2,Sub);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}

