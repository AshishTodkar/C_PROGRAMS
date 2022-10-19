#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0 , No2=0 , Div=0;

    printf("\n\t Enter a First Number For Division : ");
    scanf("%d",&No1);

    printf("\n\t Enter a Second Number For Division : ");
    scanf("%d",&No2);

    Div = No1 / No2;

    printf("\n\t Division Of %d And %d is %d.",No1,No2,Div);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
