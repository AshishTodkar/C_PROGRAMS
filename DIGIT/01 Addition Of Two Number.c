#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0 , No2=0 , Sum=0;

    printf("\n\t Enter a First Number For Addition : ");
    scanf("%d",&No1);

    printf("\n\t Enter a Second Number For Addition : ");
    scanf("%d",&No2);

    Sum = No1 + No2;

    printf("\n\t Addition Of %d And %d is %d.",No1,No2,Sum);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
