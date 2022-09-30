#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Res=0,Dig=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dig = Temp % 10;

        Res= Res + (Dig * Dig * Dig);

        Temp = Temp / 10;
    }

    if( Res == No)
    {
        printf("\n\t Given Number %d Is An Armstrong Number.",No);
    }
    else
    {
       printf("\n\t Given Number %d Is Not An Armstrong Number.",No);
    }

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
