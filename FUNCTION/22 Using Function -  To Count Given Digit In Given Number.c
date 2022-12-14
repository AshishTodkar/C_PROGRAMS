#include<stdio.h>
#include<conio.h>

void Cnt_Dig(int Num,int Dig)
{
    int Temp=0,Cnt=0;

    Temp = Num;

    while(Temp>0)
    {
        if( Temp % 10 == Dig)
        {
            Cnt++;
        }

        Temp = Temp / 10;
    }

    printf("\n\t Count Of Given Digit %d In Given Number %d Is %d.",Dig,Num,Cnt);
}

int main()
{
    int No=0,S_Dig=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    printf("\n\t Enter A Digit To Be Searched : ");
    scanf("%d",&S_Dig);

    Cnt_Dig(No,S_Dig);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
