#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,E_Cnt=0,O_Cnt=0,Dig=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        if( Dig % 2 == 0)
        {
            E_Cnt++;
        }
        else
        {
            O_Cnt++;
        }

        Temp = Temp / 10;
    }

    printf("\n\t Even Digits In Given Number %d Are %d.",No,E_Cnt);

    printf("\n\n\t Odd Digits In Given Number %d Are %d.",No,O_Cnt);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
