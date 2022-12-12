#include<stdio.h>
#include<conio.h>

void Cnt_Dig(int Num)
{
    int Cnt = 0, Temp = 0;

    Temp = Num;

    while(Temp>0)
    {
        Temp = Temp / 10;
        Cnt++;
    }

    printf("\n\t Digits In Given Number %d Are %d.",Num,Cnt);

    return;
}
int main()
{
    int No=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Cnt_Dig(No);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
