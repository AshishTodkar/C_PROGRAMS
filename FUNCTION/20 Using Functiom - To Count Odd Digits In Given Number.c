#include<stdio.h>
#include<conio.h>

int Cnt_OddDig(int Num)
{
    int Dig = 0, Cnt = 0;

    while(Num>0)
    {
        Dig = Num % 10;

        if( Dig % 2 == 1)
        {
            Cnt++;
        }

        Num = Num / 10;
    }

    return Cnt;
}

int main()
{
    int No=0,Cnt=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Cnt = Cnt_OddDig(No);

    printf("\n\t Odd Digits In Given Number %d Are %d.",No,Cnt);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
