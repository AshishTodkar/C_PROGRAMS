#include<stdio.h>
#include<conio.h>

void Min_Dig(int No)
{
    int Temp = 0, Dig = 0, Min = 0;

    Temp = No;

    Min = 9;

    while( Temp > 0 )
    {
        Dig = Temp % 10;

        if( Dig < Min )
        {
            Min = Dig;
        }

        Temp = Temp / 10;

    }

    printf("\n\t Minimum Digit In Given Number %d Is %d.",No,Min);
}

int main()
{
    int Num = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&Num);

    Min_Dig(Num);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
