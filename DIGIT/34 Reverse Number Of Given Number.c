#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Rev=0,Dig=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dig = Temp % 10;

        Rev = ( Rev * 10 ) + Dig ;

        Temp = Temp / 10;
    }

    printf("\n\t Reverse Number Of Given Number %d Is %d.",No,Rev);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
