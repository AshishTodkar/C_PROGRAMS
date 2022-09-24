#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0 , No2=0 , Mul=0;

    printf("\n\t Enter a First Number For Multiplication : ");
    scanf("%d",&No1);

    printf("\n\t Enter a Second Number For Multiplication : ");
    scanf("%d",&No2);

    Mul = No1 * No2;

    printf("\n\t Multiplication Of %d And %d is %d.",No1,No2,Mul);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}

