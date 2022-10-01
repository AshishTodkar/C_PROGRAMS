#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Cnt=0,S_Dig=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    printf("\n\t Enter A Digit To Be Searched : ");
    scanf("%d",&S_Dig);

    Temp = No;

    while(Temp>0)
    {
        if( Temp % 10 == S_Dig)
        {
            Cnt++;
        }

        Temp = Temp / 10;
    }

    printf("\n\t Count Of Given Digit %d In Given Number %d Is %d.",S_Dig,No,Cnt);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
