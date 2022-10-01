#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Cnt=0,Dig=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        if( Dig % 2 == 1)
        {
            Cnt++;
        }

        Temp = Temp / 10;
    }

    printf("\n\t Odd Digits In Given Number %d Are %d.",No,Cnt);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
