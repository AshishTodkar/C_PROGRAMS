#include<stdio.h>
#include<conio.h>

int Armstrong(int Num)
{
    int Dig = 0, Res = 0;

    while(Num>0)
    {
        Dig = Num % 10;

        Res= Res + (Dig * Dig * Dig);

        Num = Num / 10;
    }

    return Res;

}

int main()
{
    int No=0,Res=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Res = Armstrong(No);

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
